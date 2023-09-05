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
    ListNode* oddEvenList(ListNode* head) {
        /*if(head==NULL) return NULL;
        ListNode* thead=head;
        int temp;
        while(head->next!=NULL&&head->next->next!=NULL){
            temp=head->next->next->val;
            head->next->next->val=head->next->val;
            head->next->val=temp;
            head=head->next->next;
        }
        return thead;*/
        if(head==NULL) return head;
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* evenhead=even;
        while(even&&even->next){
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
        }
        odd->next=evenhead;
        return head;
    }
};