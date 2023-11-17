class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum=0;
        int ans=0;
        for(auto it:nums) {
            sum+=it;
            // cout<<sum<<endl;
            if(sum<1) {
                ans=ans+(1-sum);
                sum=1;
            }
        }
        if(ans==0) ans=1;
        return ans;
    }
};