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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL) 
           return NULL;
        ListNode *dummy=head;
        int cnt=0;
        while(dummy!=NULL){
            cnt++;
            dummy=dummy->next;
        }
        cnt=cnt-n;
        if(cnt==0) return head->next;
        dummy=head;
        while(cnt>1){
            cnt--;
            dummy=dummy->next;
        }
        dummy->next=dummy->next->next;
        return head;
    }
};