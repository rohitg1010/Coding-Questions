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
    vector<int> rightSideView(TreeNode* root) {
        if (root == nullptr)
        return {} ;
        vector<vector<int>> answer ; 
        vector <int> ans ; 
        ans.push_back(root->val) ;
        answer.push_back(ans) ;
        //cout << root->val << endl ; 
        queue <TreeNode*> q ; 
        q.push(root) ; 

        while (!q.empty())
        {
            vector<TreeNode*> temp ; 

            while (!q.empty())
            {
             TreeNode* node = q.front() ; 
             
             if (node -> right != nullptr)
             {
                temp.push_back(node->right) ; 
             }
             
            if (node -> left != nullptr)
            {
                 temp.push_back(node->left) ; 
            }
            q.pop () ; 

            }

           
vector <int> ans ; 
            for (int i = 0 ; i < temp.size() ; i++)
            {
                ans.push_back(temp[i] ->val) ;
             //   cout << temp[i]->val << endl ;
                q.push(temp[i]) ;
            }

             
              answer.push_back(ans) ;

           
        }
vector <int> game ;

answer.pop_back() ;

for (int i = 0 ; i < answer.size() ; i++)
{
    
  
    game.push_back(answer[i][0]) ;
}

return game ;

        
    }
};