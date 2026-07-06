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
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int k = preorder[0] ; 

        TreeNode* root = new TreeNode (k) ; 

        stack <TreeNode*> st ; 

         TreeNode* temp = root ; 

         queue <int> q ; 

         for (int i = 1 ; i < preorder.size() ; i++)
         {
            q.push(preorder[i]) ; 
         }

       while (! q.empty())
       {
        int x = q.front() ; 
if (x < temp->val)
{
    if (temp->left == nullptr)
    {
         TreeNode* root1 = new TreeNode (x) ; 
         temp->left = root1 ; 
         temp = root ; 
         q.pop () ; 
    }
    else 
    temp = temp->left ; 
}
else
{
     if (temp->right == nullptr)
    {
         TreeNode* root1 = new TreeNode (x) ; 
         temp->right = root1 ; 
         temp = root ; 
         q.pop () ;
    }
    else 
    temp = temp->right ; 
}


       }

       return root ; 
        
    }
};