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
    vector<int> v1,v2;
    void dfs(TreeNode* root,int val){
        if(root->left==NULL&&root->right==NULL){
            if(val==1){
                v1.push_back(root->val);
            }
            else{
                v2.push_back(root->val);
            }
        }
        if(root->left) dfs(root->left,val);
        if(root->right) dfs(root->right,val);
        return;
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        dfs(root1,1);
        dfs(root2,2);
        // for(auto it:v1) cout<<it<<" ";
        // cout<<endl;
        // for(auto it:v2) cout<<it<<" ";
        // return true;
        return v1==v2;
    }
};