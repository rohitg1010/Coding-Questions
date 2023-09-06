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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k,NULL);
        vector<int> cnt(k,0);
        ListNode* temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        // cout<<count<<endl;
        int rem=count%k;
        cout<<rem<<endl;
        for(int i=0;i<k;i++){
            if(rem) {
                cnt[i]=(count/k)+1;
                rem--;
            }
            else cnt[i]=count/k;
            // count/=k;
        }
        // for(auto it: cnt) cout<<it<<" ";
        // cout<<endl;
        for(int i=0;i<k;i++){
           if(cnt[i]>0){
               ListNode* newtemp=head;
               temp=head;
               while(cnt[i]!=1){
                   temp=temp->next;
                   cnt[i]--;
               }
               if(!temp->next==NULL)head=temp->next;
               temp->next=NULL;
               ans[i]=newtemp;
           }
        }
        return ans;
    }
};