class Solution {
public:


int answer(vector<int>& prices , int index , int buy , int count , vector<vector<vector<int>>>&dp)
{

if (count == 0 || index >= prices.size())
return 0 ;

if (dp[index][buy][count] != -1)
return dp[index][buy][count] ; 


if (buy == 1)
{
    return   dp[index][buy][count] = max(-prices[index] + answer(prices , index + 1 , 0 , count ,dp) , 0 + answer(prices , index +1 , 1 , count ,dp)) ;
}


return  dp[index][buy][count] =  max(prices[index] + answer(prices , index + 1 , 1 , count-1 ,dp) , 0 + answer(prices , index +1 , 0 , count ,dp)) ;


}

    int maxProfit(vector<int>& prices) {

vector<vector<vector<int>>>dp(prices.size() , vector<vector<int>>(2 , vector<int>(3 , -1))) ;
        int k = answer(prices , 0 , 1 , 2 , dp) ; 

        return k ;
        
    }
};