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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *fast = head, *slow = head, *n1 = head;
        for(int i = 1 ; i < k ; i++){
            fast = fast->next;
            n1 = fast;
        }
        while(fast->next != NULL) {
         fast = fast->next;
         slow = slow->next;
        }
        int temp = n1->val;
        n1->val = slow->val;
        slow->val = temp;
        return head;
    }
};