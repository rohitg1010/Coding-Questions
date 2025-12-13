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
    int count = 0 ; 
    ListNode*temp = head ; 


    while(temp != nullptr)
    {
        count ++ ; 
        temp = temp->next ;
    }

int k = count - n   ;   // k = 5 - 2 = 3

int newcount = 0 ;

if (count == 1 && n == 1)
return nullptr ; 
ListNode*newnode = head ;

temp = head ;
while (temp!=nullptr)
{
    newcount ++ ; 
    newnode = temp->next ;

if (k == 0)
{
    head = head->next ;
    break ;
}

if (newcount == k)
{
temp->next = newnode->next ;
break ;
}
temp = temp->next ;
}

return head ;
    }
};