/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        map <Node* , Node*> freq ; 
        Node*dummy = new Node(-1) ; 
        Node* prev = dummy ; 
        Node* temp = head ; 
        while (temp!= nullptr)
        {
            Node* newNode = new Node(temp->val) ; 
            prev->next = newNode ; 
            prev = newNode ; 
            freq[temp] = newNode ; 
            temp = temp->next;
        }

        Node* old = dummy->next; 
        temp = head ;

        while (temp != nullptr)
        {
            old->random = freq[temp->random] ; 
            temp = temp->next ;
            old = old->next ;
        }

        return dummy->next ;
    }
};