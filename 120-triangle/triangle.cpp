class Solution {
public:

int answer(vector<vector<int>>& triangle , int i , int j , int n ,  vector<vector<int>> &dp  )
{
    if (i == n -1)
    return triangle[i][j] ; 

    if (j >= triangle[i].size())
    return 0 ; 

    if (dp[i][j]  != -100000)
    return dp[i][j] ;

    int one = triangle [i][j] + answer(triangle , i+1 , j , n , dp) ;
    int two = triangle [i][j] + answer(triangle , i +1 , j+1 , n , dp) ;

    return dp[i][j] = min(one , two) ;
}

    int minimumTotal(vector<vector<int>>& triangle) {

        int n = triangle.size() ; 

vector<vector<int>> dp ; 
     for (int i = 0 ; i < triangle.size() ; i++)
     {

        vector<int> temp ; 
        for (int j = 0 ; j <=i ; j++)
        {
temp.push_back(-100000) ;
        }
dp.push_back(temp) ;

     }
        int k = answer(triangle , 0 , 0 , n , dp) ;

        return k ; 
        
    }
};