class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN,prod=1,n=nums.size();
        for(auto it:nums){
            prod*=it;
            maxi=max(prod,maxi);
            if(prod==0) prod=1;
        }
        prod=1;
        reverse(nums.begin(),nums.end());
        for(auto it:nums){
            prod*=it;
            maxi=max(prod,maxi);
            if(prod==0) prod=1;
        }
        return maxi;
    }
};