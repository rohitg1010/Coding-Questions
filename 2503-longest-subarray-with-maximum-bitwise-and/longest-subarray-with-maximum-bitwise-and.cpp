class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi=-1;
        for(int i=0;i<nums.size();i++) maxi=max(maxi,nums[i]);
        int ans=0,temp=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==maxi){
                temp++;
            }
            else{
                ans=max(ans,temp);
                temp=0;
            }
        }
        ans=max(ans,temp);
        return ans;
    }
};