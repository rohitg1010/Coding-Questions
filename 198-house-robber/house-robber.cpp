class Solution {
public:


int answer (vector<int>& nums , int index , vector <int> &dp)
{

if (index >= nums.size())
return 0 ; 

if (dp[index] != -1)
return dp[index] ; 

int take = nums[index] + answer(nums , index + 2 , dp) ; 

int skip = answer(nums , index + 1 , dp) ; 

return dp[index] = max (take , skip) ; 

}


    int rob(vector<int>& nums) {

        vector<int> dp (nums.size() , -1) ; 

        int k = answer(nums , 0 , dp ) ; 
        return k ; 
        
    }
};