/**
 * Definition for a binary tree TreeNode.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        unordered_map <TreeNode* , vector<TreeNode*>> freq ; 
        vector <TreeNode*> vecty ; 

        if (root == nullptr)
        return root ; 

        queue <TreeNode* > qtt ; 
        qtt.push(root) ; 

        while (!qtt.empty())
        {
            TreeNode* x = qtt.front() ; 
            vecty.push_back(x) ;
           qtt.pop() ; 

           if (x->left != nullptr)
           {
            qtt.push(x->left) ; 
            freq[x].push_back( x->left) ;
           }

           if(x->right != nullptr)
           {
             qtt.push(x->right) ; 
               freq[x].push_back ( x->right );
           }


        }

  //map <TreeNode* , vector<TreeNode*>> answer ; 
   queue <TreeNode*> qt ;
   TreeNode* ans = root ; 
 bool pfind = false ; 
 bool qfind = false ; 




   for (int i = vecty.size()-1  ;  i>= 0  ; i--)
   {
qt.push(vecty[i]) ; 
 //answer[vecty[i]].push_back(vecty[i]); 

 //cout << "queue initial push" << vecty[i] ->val << endl; 

 if (pfind == true && qfind == true)
 break ; 

pfind = false ;
qfind = false ;


while(!qt.empty())
{
    TreeNode* x = qt.front() ; 
    qt.pop() ; 

    if (p == x)
    pfind = true ; 

    if (q == x)
    qfind = true ; 

    if (pfind == true and qfind == true)
    {
        ans = vecty[i] ; 
        break ; 
    }
  
  for (auto it : freq[x])
  {
    qt.push(it) ; 
  //  cout << "queue loop push" << it ->val << endl; 
    //answer[vecty[i]].push_back(it) ; 


  }
}

   } 


// for (auto it : answer)
// {
//     for (auto x : it.second)
//     {
//         cout << it.first->val << "->" << " " << x->val << endl ;
//     }
// }

  
//    TreeNode* ans = root ; 

//    for (int i = 0 ;  i < vecty.size() ; i++)
// {
//      bool pfind = false ; 
//    bool qfind = false ;  

   // cout << "start of loop" << endl ; 
   // cout << "vecty ke value" << vecty[i]->val << endl;

//    int sizey = answer[vecty[i]].size() ; 
//    if (sizey < 2)
//    continue ;


    // for (auto it : answer[vecty[i]])
    // {
    //  //   cout << it->val << endl ; 
    //     if (it == p)
    //     {
    //         pfind = true ;
    //     }

    //     if (it == q)
    //     {
    //         qfind = true ;
    //     }

    //      if ( pfind == true && qfind == true)
    //      break ; 

    // }

   

//     if ( pfind == true && qfind == true)
//      ans = vecty[i] ; 
// }



return ans ;

    }
};