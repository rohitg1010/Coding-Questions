class Solution {
public:
    bool search(vector<int>& nums, int target) {
        // for(auto it:nums) if(it==target) return true;
        // return false;
        auto it = find(nums.begin(),nums.end(),target);
        if(it==nums.end()) return false;
        return true;
    }
};