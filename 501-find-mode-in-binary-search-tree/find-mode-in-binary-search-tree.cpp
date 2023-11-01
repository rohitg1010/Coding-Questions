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
    void inorder(TreeNode* root,unordered_map<int,int> &nodes){
        if(root==NULL) return;
        nodes[root->val]++;
        inorder(root->left,nodes);
        inorder(root->right,nodes);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> nodes;
        vector<int> ans;
        if(root==NULL) return ans;
        inorder(root,nodes);
        int maxi=INT_MIN;
        for(auto &n:nodes){
            //cout<<n.second<<endl;
            maxi=max(maxi,n.second);
        }
        for(auto &n:nodes){
            if(n.second==maxi)
            ans.push_back(n.first);
        }
        return ans;
    }
};