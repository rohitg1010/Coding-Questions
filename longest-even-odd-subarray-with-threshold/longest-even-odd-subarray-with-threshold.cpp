class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int n=nums.size(),ans=0;
        for(int i=0;i<n;i++){
            int temp=1;
            if(nums[i]%2==0&&nums[i]<=threshold){
                for(int j=i+1;j<n;j++){
                    // if(nums[j]>threshold||nums[j+1]>threshold) break;
                    if(((nums[j]%2)!=(nums[j-1]%2))&&nums[j]<=threshold&&nums[j-1]<=threshold) temp++;
                    else break;
                }
                ans=max(ans,temp);
            }
        }
        return ans;
    }
};