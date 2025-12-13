/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp = node ; 
        ListNode* newnode = node->next ;
        temp->val = temp->next->val ;
        temp->next = newnode->next ;
        
    }
};