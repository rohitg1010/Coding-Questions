/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        ListNode* curr=head,*t;
        vector<int> v;
        while(curr!=NULL){
            while(!v.empty()&&v.back()<curr->val){
                v.pop_back();
            }
            v.push_back(curr->val);
            curr=curr->next;
        }
        curr=head;
        t=head;
        for(auto it:v){
            t->val=it;
            curr=t;
            t=t->next;
        }
        curr->next=NULL;
        return head;
    }
};