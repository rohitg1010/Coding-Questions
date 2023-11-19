class Solution {
public:
    // time/space: O(nlogn)/O(n)
    int reductionOperations(vector<int>& nums) {
        int n = nums.size();

        // sort the array
        sort(nums.begin(), nums.end());

        // scan from the end of the array
        int op = 0, r = n - 1;
        while (r >= 0) {
            // skip the duplicate values
            while ((r > 0) && (nums[r - 1] == nums[r])) r--;
            // move to the next different value
            r--;
            // update the number of operations that applied on `nums[r + 1] ~ nums[n - 1]`
            // except the smaller value (index is `0`)
            if (r >= 0) op += (n - r - 1);
        }
        return op;
    }
};
