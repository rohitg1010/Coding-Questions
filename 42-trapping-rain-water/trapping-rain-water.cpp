class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n - 1;
        int left_max = 0, right_max = 0;
        int water_stored = 0;

        while (left < right) {
            if (height[left] < height[right]) {
                left_max = max(left_max,height[left]);
                if (left_max-height[left]>0){
                    water_stored += left_max - height[left];
                }
                left++;
            } else {
                right_max = max(right_max,height[right]);
                if (right_max - height[right]>0){
                    water_stored += right_max - height[right];
                }
                right--;
            }
        }
        return water_stored;
    }
};