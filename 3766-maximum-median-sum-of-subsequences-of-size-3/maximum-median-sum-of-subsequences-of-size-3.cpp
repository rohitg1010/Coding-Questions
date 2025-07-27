class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        //for(int it:nums) cout<<it<<" ";
        //cout<<endl;
        int i=0,j=nums.size()-2;
        long long ans = 0;
        while(i<j){
            ans+=nums[j];
            i++;
            j-=2;
        }
        return ans;
    }
};