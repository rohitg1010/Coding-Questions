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
    bool isPalindrome(ListNode* head) {
        string s="";
        if(head==NULL) return false;
        while(head!=NULL){
            // s+=to_string(head->val);
            s+=(head->val);
            head=head->next;
        }
        cout<<s<<endl;
        string temp=s;
        reverse(temp.begin(),temp.end());
        // if(temp==s) return true;
        // else return false;
        return temp==s;
    }
};