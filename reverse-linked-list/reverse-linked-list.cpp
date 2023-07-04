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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        vector<int> v;
        while(curr!=NULL){
            v.push_back(curr->val);
            curr=curr->next;
        }
        reverse(v.begin(),v.end());
        curr=head;
        int i=0;
        while(curr!=NULL){
            curr->val=v[i++];
            curr=curr->next;
        }
        return head;
    }
};