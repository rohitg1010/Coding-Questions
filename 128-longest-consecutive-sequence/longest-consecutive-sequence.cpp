class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        set<int> st;
        for(auto it:nums) st.insert(it);
        nums={};
        for(auto it:st) nums.push_back(it);
        sort(nums.begin(),nums.end());
        int maxi=0,cnt=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]-1){
                maxi=max(maxi,cnt+1);
                cnt=0;
            }
            else cnt++;
        }
        maxi=max(maxi,cnt+1);
        return maxi;
    }
};