class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int > freq ; 
        vector <int> answer ; 
        
        for (int i = 0 ; i < nums.size() ; i++)
        {
            int remain = target - nums[i] ; 

            if (freq.find(remain)!= freq.end())
            {
               answer.push_back(freq[remain]) ; 
               answer.push_back(i) ; 
                return answer ;
            }

            freq[nums[i]] = i ; 
        }

        return {-1 , -1 } ;
    }
};