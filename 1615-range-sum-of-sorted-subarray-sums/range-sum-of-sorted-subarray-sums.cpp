class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> v;
        int mod=1000000007;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                // v.push_back(sum);
                sum+=nums[j];
                v.push_back(sum);
            }
            // v.push_back(sum);
        }
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=left-1;i<right;i++){
            ans+=v[i];
            ans%=mod;
        }
        return ans%mod;
    }
};