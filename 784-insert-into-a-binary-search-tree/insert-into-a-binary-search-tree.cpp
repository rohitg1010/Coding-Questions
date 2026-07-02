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
    TreeNode* insertIntoBST(TreeNode* root, int val) {

        if (root == nullptr)
        {
               TreeNode* x = new TreeNode(val) ; 
               return x ; 
        }

        TreeNode* temp = root ; 

        while (temp!= nullptr)
        {
            if (val > temp->val)
            {
                if (temp->right == nullptr)
                {
                    TreeNode* x = new TreeNode(val) ; 
                    temp -> right =  x ; 
                    break ; 
                }
                else
                temp = temp-> right ;
            }
            else
            {
                if (temp->left == nullptr)
                {
                    TreeNode* x = new TreeNode(val) ; 
                    temp -> left =  x ; 
                    break; 
                }
                else
                temp = temp-> left ; 
            }
        }

        return root ; 
        
    }
};