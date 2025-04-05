class Solution {
public:
    int Sum(vector<int>& nums, int index, int currentSum){
        if(index == nums.size()){
            return currentSum;
        }

        int withElement = Sum(nums, index + 1, currentSum ^ nums[index]);
        int withOutElement = Sum(nums, index + 1, currentSum);

        return withElement + withOutElement;
    }

    int subsetXORSum(vector<int>& nums) {
        return Sum(nums, 0, 0);
    }
};