class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int ans = 0,curr=0,n=nums.size();
        for(int i=0;i<n;i++){
            ans^=nums[i];
            if(nums[i]!=0) curr++;
        }
        if(ans) return n;
        if(curr) return n-1;
        return 0;
    }
};