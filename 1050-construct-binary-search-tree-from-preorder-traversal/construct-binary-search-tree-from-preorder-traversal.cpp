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


TreeNode* answer(TreeNode* root , int x)
{

if (root == nullptr)
{
    TreeNode* newNode = new TreeNode(x);
return newNode;

}


if (root->val > x)
root->left = answer(root->left , x);
else
root->right = answer(root->right , x);

return root ;

}


    TreeNode* bstFromPreorder(vector<int>& preorder) {
    TreeNode* root = new TreeNode() ;
    root = nullptr ;

     for (int i = 0 ; i < preorder.size() ; i++)
     {
        root = answer(root , preorder[i]);
     }


     return root ;




    }
};