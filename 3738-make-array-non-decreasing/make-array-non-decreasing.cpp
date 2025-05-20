class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        int ans=1,maxi=nums[0];
        for(int i=1;i<nums.size();i++){
            if(maxi<=nums[i]){
                maxi=nums[i];
                ans++;
            }
        }
        return ans;
    }
};