class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans=0;
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    ans=max(ans,(nums[i]-nums[j])*(long long)nums[k]);
                }
            }
        }
        return ans;
    }
};