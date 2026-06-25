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


TreeNode* solve (vector<int>& postorder , int prestart , int preend ,vector<int>& inorder ,int instart , int inend ,  map <int , int > &freq)
{

if (prestart > preend || instart > inend)
return nullptr ; 

TreeNode* node = new TreeNode (postorder[prestart]) ;

int rootindex = freq[node -> val] ; 

int right = inend - rootindex ;

node->left = solve (postorder , prestart+1+right , preend , inorder , instart , rootindex-1 , freq) ;

node->right = solve(postorder , prestart+1 , preend+right , inorder , rootindex+1 ,inend, freq) ;

return node ; 


}

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map <int , int > freq ; 

for (int i = 0 ; i < inorder.size() ; i++)
{
    freq[inorder[i]] =  i ;
}

reverse(postorder.begin() , postorder.end()) ;

int prestart = 0 ; 
int preend = postorder.size() -1 ; 
int instart = 0 ; 
int inend = inorder.size() - 1 ;

TreeNode*head =  new TreeNode () ;

head = solve (postorder , prestart , preend,inorder ,  instart , inend , freq) ;

return head ; 

    }
};