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
    unordered_set<int> s;
    void inorder(TreeNode* root){
        if(root->left) inorder(root->left);
        // v.push_back(root->val);
        s.insert(root->val);
        if(root->right) inorder(root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        inorder(root);
        if(s.size()<2) return -1;
        vector<int> v;
        for(auto it:s) v.push_back(it);
        sort(v.begin(),v.end());
        return v[1]; 
    }
};