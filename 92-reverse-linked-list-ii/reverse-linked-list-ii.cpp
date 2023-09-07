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
    /*ListNode* reverseList(ListNode* node,int c){
        if(node == NULL || node->next == NULL) return node;
        
        ListNode* prev = NULL;
        while(node != NULL&&c--){
            ListNode* nxt = node->next;
            node->next = prev;
            prev = node;
            node = nxt;
        }
        return prev;
    }*/
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        /*int count=1;
        if(left==right) return head;
        ListNode* temp=head,*rev=NULL,*temp2=head;
        while(count!=left-1&&temp->next){
            temp=temp->next;
            count++;
        }
        count=1;
        while(count!=right+1&&temp2->next){
            temp2=temp2->next;
            count++;
        }
        rev=reverseList(temp->next,right-left+1);
        temp->next=rev;
        while(rev!=NULL){
            rev=rev->next;
        }
        cout<<rev->val<<endl;
        //cout<<temp->val<<" "<<temp2->val<<endl;
        rev->next=temp2;
        return head;*/
        if(left==right)
            return head;
        ListNode* temp = head,*n1=NULL;
        stack<ListNode*> s;
        for(int i=0;i<left-1;i++)
        {
            n1 = temp;
            temp = temp->next;
        }
        for(int i=0;i<right-left;i++)
        {
            s.push(temp);
            temp = temp->next;
        }
        s.push(temp);
        ListNode* n2 = temp->next;
        while(!s.empty())
        {
            if(n1==NULL)
            {
                n1 = s.top();
                head=n1;
            }
            else
            {
                n1->next = s.top();
                n1 = n1->next;
            }
            s.pop();
        }
        n1->next = n2;
        return head;
    }
};