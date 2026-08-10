class Solution {
public:

int answer(vector<int>& prices , int index , vector<int>& dp)
{
    if (index >= prices.size())
    return 0 ; 

    if (dp[index] != -1)
    return dp[index] ;

    int sell = prices[index] - prices[index-1] + answer(prices , index+1 , dp) ;

    int nosell = answer(prices , index +1 ,dp) ;

    return  dp[index] = max(sell , nosell) ; 
}



    int maxProfit(vector<int>& prices) {

        vector<int>dp (prices.size() , -1) ;

        int k = answer(prices , 1 , dp) ;

        return k ;
        
    }
};