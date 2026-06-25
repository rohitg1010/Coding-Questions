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

TreeNode* solve (vector<int>& preorder , int prestart , int preend ,vector<int>& inorder ,int instart , int inend ,  map <int , int > &freq)
{

if (prestart > preend || instart > inend)
return nullptr ; 

TreeNode* node = new TreeNode (preorder[prestart]) ;

int rootindex = freq[node -> val] ; 

int leftelement = rootindex - instart ;

node->left = solve (preorder , prestart+1 , prestart + leftelement , inorder , instart , rootindex-1 , freq) ;

node->right = solve(preorder , prestart+1+leftelement , preend , inorder , rootindex+1 ,inend, freq) ;

return node ; 


}


public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
     map <int , int > freq ; 

for (int i = 0 ; i < inorder.size() ; i++)
{
    freq[inorder[i]] =  i ;
}

int prestart = 0 ; 
int preend = preorder.size() -1 ; 
int instart = 0 ; 
int inend = inorder.size() - 1 ;

TreeNode*head =  new TreeNode () ;

head = solve (preorder , prestart , preend,inorder ,  instart , inend , freq) ;

return head ; 

    }
};