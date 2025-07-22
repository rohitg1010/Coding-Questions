class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        int n = nums.size();

        for (int i = 0; i < n - 2; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // skip duplicate a

            int l = i + 1, r = n - 1;
            while (l < r) {
                int total = nums[i] + nums[l] + nums[r];
                if (total == 0) {
                    res.push_back({nums[i], nums[l], nums[r]});
                    while (l < r && nums[l] == nums[l + 1]) l++; // skip duplicate b
                    while (l < r && nums[r] == nums[r - 1]) r--; // skip duplicate c
                    l++; r--;
                } else if (total < 0) {
                    l++;
                } else {
                    r--;
                }
            }
        }

        return res;
    }
};
