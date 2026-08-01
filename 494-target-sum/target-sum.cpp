class Solution {
public:

int answer (vector<int>& nums, int target , int index , int sum , vector<vector<int>>&dp , int total)
{
    if (index == nums.size())
    if (sum == target)
    return 1 ; 
    else 
    return 0 ; 

    if(dp[index][sum + total] != -1)
    return dp[index][sum + total] ; 

    int take = answer(nums , target , index+1 , sum + nums[index] , dp , total);
    int notake = answer(nums , target , index+1 , sum - nums[index] ,dp , total) ;

    return dp[index][sum + total] =  take + notake ; 

}
    int findTargetSumWays(vector<int>& nums, int target) {
int total = 0 ;

        for (int i = 0 ; i < nums.size() ; i++)
        total = total + nums[i] ;

        total = total ;

vector<vector<int>>dp(nums.size() , vector<int>( 2* total+1 , -1)) ;


        int k = answer(nums , target , 0 , 0 , dp , total) ;
        return k ; 
        
    }
};