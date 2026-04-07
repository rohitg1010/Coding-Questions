class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Brute Force
        /*int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target) return {i,j};
            }
        }
        return {-1,-1};
        */
        //Two Pointer - Sorting keeping index
        vector<pair<int, int>> numsWithIndex;
        for (int i = 0; i < nums.size(); i++) {
            numsWithIndex.push_back({nums[i], i});
        }
        sort(numsWithIndex.begin(), numsWithIndex.end());
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int sum = numsWithIndex[left].first + numsWithIndex[right].first;
            if (sum == target) {
                return {numsWithIndex[left].second, numsWithIndex[right].second};
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        return {};
    }
};