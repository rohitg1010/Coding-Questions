class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi=-1;
        vector<int> zeros;
        zeros.push_back(-1);
        for(int i=0;i<nums.size();i++) if(nums[i]==0) zeros.push_back(i);
        zeros.push_back(nums.size());
        for(int i=1;i<zeros.size()-1;i++){
            maxi=max(maxi,zeros[i+1]-zeros[i-1]-2);
        }
        if(zeros.size()==2) return nums.size()-1;
        return maxi;
    }
};