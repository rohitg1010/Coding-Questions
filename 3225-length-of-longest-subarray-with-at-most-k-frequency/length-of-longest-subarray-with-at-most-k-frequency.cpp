class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int i=0,j=0,n=nums.size(),ans=INT_MIN;
        while(j<n){
            mp[nums[j]]++;
            while (mp[nums[j]] > k) {
                mp[nums[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        //if(ans==INT_MIN) return n;
        //ans=max(ans,j-i);
        return ans;
    }
};