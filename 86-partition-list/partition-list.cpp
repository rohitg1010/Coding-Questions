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
    ListNode* partition(ListNode* head, int x) {
        vector<int> first,second;
        ListNode* temp=head;
        while(temp){
            if(temp->val<x) first.push_back(temp->val);
            else second.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        int i=0,j=0;
        while(temp){
            if(i<first.size()) temp->val=first[i++];
            else{
                temp->val=second[j++];
            }
            temp=temp->next;
        }
        return head;
    }
};