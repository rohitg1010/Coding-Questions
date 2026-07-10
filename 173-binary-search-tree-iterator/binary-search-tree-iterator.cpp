/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class BSTIterator {
public:


stack <TreeNode* > st ; 


    BSTIterator(TreeNode* root) {

   // cout << "Bst Push" << root -> val  << endl ; 

        pushall(root) ; 
        
    }

    void pushall(TreeNode* root)
    {
        if (root == nullptr)
        return  ;
     
     while (root != nullptr)
     {
        st.push(root) ; 
        cout << "push" << root -> val  << endl ; 
        root = root -> left ; 
     }


     return ; 


    }
    
    int next() {
        TreeNode* x = st.top() ; 
       st.pop () ; 
        int data = x -> val ;

         cout << "pop" << x -> val  << endl ; 

        if (x == nullptr)
        return -1 ; 

        pushall(x->right) ; 
        
//st.pop () ; 
        return data ;
        
    }
    
    bool hasNext() {

        if (!st.empty())
        return true ; 

        return  false ; 
        
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */