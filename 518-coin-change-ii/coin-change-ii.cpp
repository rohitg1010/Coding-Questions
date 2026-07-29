class Solution {
public:

int answer (int amount, vector<int>& coins , int index , int sum ,  vector<vector<int>> &dp)
{

if (sum == amount)
return 1 ; 


if (sum > amount)
return 0 ;

if (index == coins.size())
return 0 ; 


if (dp[index][sum] != -1)
return dp[index][sum] ;


int take = answer(amount , coins , index , sum + coins[index] , dp) ;

int notake = answer(amount , coins , index+1 , sum ,dp) ;

return dp[index][sum] =  take + notake ;


}
    int change(int amount, vector<int>& coins) {

        vector<vector<int>>dp(coins.size() , vector<int>(amount+1 , -1)) ;

        int k = answer(amount , coins , 0 , 0 , dp) ;

        return k ;
        
    }
};