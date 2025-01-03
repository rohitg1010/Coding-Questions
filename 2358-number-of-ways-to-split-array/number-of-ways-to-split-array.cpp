class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        if(nums.size()<=1) return 0;
        vector<long long> right_sum(n,0),left_sum(n,0);
        right_sum[0]=nums[0];
        left_sum[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            right_sum[i]+=(right_sum[i-1]+nums[i]);
            left_sum[n-i-1]+=(left_sum[n-i]+nums[n-i-1]);
        }
        /*for(int i=0;i<n;i++){
            cout<<right_sum[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<left_sum[i]<<" ";
        }*/
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(right_sum[i]>=left_sum[i+1]) ans++;
        }
        return ans;
    }
};