class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int cnt=0,n=nums.size(),product=1;
        for(auto it:nums){
            if(it==0) cnt++;
            else{
                product*=it;
            }
        }
        vector<int> ans(n,0);
        if(cnt>1) return ans;
        for(int i=0;i<n;i++){
            if(cnt&&nums[i]!=0){
                ans[i]=0;
            }
            else if(cnt&&nums[i]==0){
                ans[i]=product;
            }
            else{
                ans[i]=product/nums[i];
            }
        }
        return ans;
    }
};