class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> st;
        int n=nums.size(),l=0,curr=0,maxi=0;
        for(int i=0;i<n;i++){
            while(st.count(nums[i])){
                curr-=nums[l];
                st.erase(nums[l]);
                l++;
            }
            curr+=nums[i];
            st.insert(nums[i]);
            maxi=max(maxi,curr);
        }
        return maxi;
    }
};