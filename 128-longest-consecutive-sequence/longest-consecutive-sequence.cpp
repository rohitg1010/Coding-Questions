class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        sort(nums.begin(),nums.end());
        int maxi=1,cnt=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) continue;
            if(nums[i]!=(nums[i-1]+1)){
                maxi=max(maxi,cnt);
                cnt=1;
            }
            else cnt++;
        }
        maxi=max(maxi,cnt);
        return maxi;
    }
};