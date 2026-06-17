class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX,curr=0,n=nums.size(),i=0,j=0;
        while(i<n){
            while(curr<target&&j<n) curr+=nums[j++];
            //cout<<curr<<" "<<j<<endl;
            if(curr<target&&ans==INT_MAX) return 0;
            if(curr>=target)ans=min(ans,j-i);
            //cout<<ans<<endl;
            curr-=nums[i++];
        }
        return ans;
    }
};