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
    vector<int> v;
    void traversal(TreeNode* root, int x, int y, int depth,int val){
        if(root->val==x||root->val==y) {v.push_back(depth); v.push_back(val);}
        if(root->left) traversal(root->left,x,y,depth+1,root->val);
        if(root->right) traversal(root->right,x,y,depth+1,root->val); 
    }
    bool isCousins(TreeNode* root, int x, int y) {
        traversal(root,x,y,0,root->val);
        // cout<<v.size()<<endl;
        // cout<<v[0]<<" "<<v[1]<<endl;
        return v[0]==v[2]&&v[1]!=v[3];
    }
};