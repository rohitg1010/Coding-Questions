class Solution {
public:
    bool isGood(vector<int>& nums) {
        int i = 0, n = nums.size() - 1, count = 0;
        while (i <= n) {
            if (count > n + 1) return false;
            if (nums[i] == i || 0 == i && nums[0] == n) {
                // If the number is already at the correct place, just move forward.
                i++;
                continue;
            }
            // In case of number larger than index range
            if (nums[i] > n) return false;
            // Swap with index 0 when it's N and A0 not accupied.
            if (nums[i] == n && nums[0] != n) {
                swap(nums[0], nums[i]);
                count++;
            } else {
                swap(nums[i], nums[nums[i]]);
                count++;
            }
        }
        return true;
    }
};