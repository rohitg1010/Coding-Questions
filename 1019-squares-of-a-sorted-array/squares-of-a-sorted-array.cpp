class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        if(nums.size()==0) return {};
        int l=0,n=nums.size(),r=nums.size()-1;
        vector<int> res(n,0);
        for(int k=n-1;k>=0;k--){
            if(abs(nums[l])>abs(nums[r])){
                res[k]=nums[l]*nums[l++];
            }
            else{
                res[k]=nums[r]*nums[r--];
            }
        }
        return res;
    }
};