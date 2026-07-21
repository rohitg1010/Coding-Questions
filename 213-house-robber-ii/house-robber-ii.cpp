class Solution {
public:

int answer (vector<int>& nums , int index ,  vector <int> & dp , int n )
{

if (index >= n)
return 0 ; 

if (dp[index]!= -1)
return dp[index] ; 

int take = nums[index] + answer(nums , index + 2 , dp , n) ; 



int skip = answer(nums , index + 1  , dp ,  n ) ; 

return dp[index] = max(take , skip) ; 

}


    int rob(vector<int>& nums) {

        bool maxi = true ; 
        int n = nums.size() ; 
        vector<int> dp(nums.size() , -1) ;
        vector<int> dp1(nums.size() , -1) ;

        int k = answer(nums , 1 ,  dp , n ) ;

        int l = answer(nums , 0 , dp1 , n-1);

        if (nums.size() == 1)
        return nums[0] ; 

        return max(k , l ) ;
        
    }
};