class Solution {
public:

int answer(vector<int>& coins, int amount , int index ,long long sum ,   vector<vector<int>>&dp)
{

if (sum == amount)
return 0 ; 

if (sum > amount)
return 10001; 

if (index>=coins.size())
return 10001; 

if(dp[index][sum] != -1)
return  dp[index][sum] ;

int take = 1 + answer(coins , amount , index , sum + coins[index] , dp ) ; 

int notake = answer(coins , amount , index+1 , sum  , dp) ;

return dp[index][sum] = min(take , notake) ;


}

    int coinChange(vector<int>& coins, int amount) {

        vector<vector<int>>dp(coins.size() , vector<int>(amount+1 , -1));

        int k = answer(coins , amount , 0 , 0 , dp) ;

        if (k == 10001)
        return -1 ; 

        return k ; 
        
    }
};