class Solution {
public:

bool answer (vector <int>& nums , int index , int sum , int diff , vector<vector<int>> &dp)
{

if (sum > diff)
return false ; 

if (diff == sum)
return true ; 

if (index == nums.size())
return false ; 

if (dp[index][sum] != -1)
return dp[index][sum] ;

bool ans1 = answer(nums , index + 1 , sum + nums[index] , diff - nums[index] , dp) ; 

bool ans2 = answer (nums , index + 1 , sum , diff , dp) ;

return dp[index][sum] =  ans1 || ans2 ;



}
    bool canPartition(vector<int>& nums) {
        int diff = 0 ;
        for (int i = 0 ; i < nums.size() ; i++)
        diff = diff + nums[i] ;

        int sum = 0 ; 
        int index = 0 ;
        int n = nums.size() ;

        vector<vector<int>>dp(n , vector<int>(diff , -1));

        bool k = answer(nums , index , sum , diff , dp) ;

        return k ;

    }
};