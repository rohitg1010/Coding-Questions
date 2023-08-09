class Solution {
public:
    int search(vector<int>& nums, int target) {
        int idx=-1;
        for(auto it:nums){
            idx++;
            if(it==target) return idx;
        }
        return -1;
    }
};