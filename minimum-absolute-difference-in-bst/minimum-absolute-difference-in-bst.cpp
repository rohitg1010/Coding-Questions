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
    void inorder(TreeNode* node){
        if(node->left) inorder(node->left);
        v.push_back(node->val);
        if(node->right) inorder(node->right);
    }
    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        int ans=INT_MAX;
        int n=v.size();
        for(int i=0;i<n-1;i++){
            ans=min(ans,v[i+1]-v[i]);
        }
        return ans;
    }
};