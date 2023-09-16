class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int n=nums.size();
        vector<int> v=nums;
        sort(v.begin(),v.end());
        if(v==nums) return 0;
        for(int i=0;i<n;i++){
            int t=nums[n-1];
            for(int i=n-2;i>=0;i--){
                nums[i+1]=nums[i];
            }
            nums[0]=t;
            // for(auto it:nums) cout<<it<<" ";
            // cout<<endl;
            if(v==nums) return i+1;
        }
        return -1;
    }
};