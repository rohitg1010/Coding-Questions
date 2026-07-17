class Solution {
public:


int answer ( int i , int n , int ans , vector<vector<int>> & dp)
{


if (ans == n)
return 1 ; 


if (ans > n)
return 0 ; 


if (dp[i][ans] != -1)
return dp[i][ans] ; 

int onemove = answer(0 , n , ans + 1 , dp) ; 
int twomove = answer(1 , n , ans + 2 , dp ) ;


return dp[i][ans] = onemove + twomove ; 




}


    int climbStairs(int n) {
        int ans = 0 ;

        vector<vector<int>>dp(n , vector<int>(n+1 , -1)) ;
        int i = 0 ;

        int k = answer(i , n , ans , dp) ;

        return k ; 
        
    }
};