class Solution {
void Count(vector<int>& nums , int index , vector<vector<int>>& ans , vector<int> temp)
{

if (index >= nums.size())
{
    ans.push_back(temp) ; 
    return ;
}

temp.push_back(nums[index]) ; 
Count(nums , index + 1 , ans , temp) ; 
temp.pop_back() ; 
while (index + 1 < nums.size() && nums[index] == nums[index+1])
index ++ ; 
Count(nums, index+1 , ans , temp) ;
return ;

}

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ;; 
    vector<int> temp ; 
    vector<vector<int>> ans ; 
  //  ans.push_back(temp) ; 

    if (nums.size() == 0)
    return ans ;
    int index = 0 ;
Count(nums , index , ans , temp) ;
return ans ; 


    }
};