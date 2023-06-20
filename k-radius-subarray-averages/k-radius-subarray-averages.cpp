class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans(n,-1);
        if(n>=2*k+1){
            int i=0,j=2*k+1;
            long long int sum=0;
            for(int i=0;i<j;i++) sum+=nums[i];
            while(j<n){
                ans[i+k]=(sum/(2*k+1));
                sum+=nums[j++];
                sum-=nums[i++];
            }
            ans[i+k]=(sum/(2*k+1));
        }
        return ans;
    }
};