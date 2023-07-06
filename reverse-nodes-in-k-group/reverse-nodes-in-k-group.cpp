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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL||head->next==NULL) return head;
        ListNode *dummy=head,*ans=head;
        int cnt=0;
        while(dummy!=NULL){
            cnt++;
            dummy=dummy->next;
        }
        cnt/=k;
        stack<int> st;
        int k1=k;
        dummy=head;
        while(dummy!=NULL){
            st.push(dummy->val);
            k1--;
            dummy=dummy->next;
            if(k1==0){
                while(!st.empty()){
                    ans->val=st.top();
                    st.pop();
                    ans=ans->next;
                }
                cnt--;
                k1=k;
            }
            if(cnt==0) break;
        }
        return head;
    }
};