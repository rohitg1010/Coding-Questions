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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
         queue <pair <TreeNode* , pair <int , int> > > q ;
        map <int , map<int , multiset<int>>> freq; 
        
        q.push({root , {0,0}}) ; 
        
         vector<vector<int>> answer ;
        
        while (!q.empty())
        {
            
            auto p = q.front () ; 
            q.pop() ; 
            int x = p.second.first ;
            int y = p.second.second ;
            TreeNode * node = p.first ; 
           
           freq[x][y].insert(node->val);
            
            if (node -> left != nullptr)
            q.push({node->left , {x-1 , y+1}}) ; 
            
            if (node -> right != nullptr)
                  q.push({node->right , {x+1 , y+1}}) ; 
            
            
        }
        
        
        for (auto p : freq)
        {
       vector<int> temp ;
            for (auto q : p.second)
            {
                for (auto r : q.second)
                {
                temp.push_back(r) ; 
                
              //  cout << r ;
                }
               
            }
            answer.push_back(temp);
        }
        
        return answer ;
        
    } 
    
};