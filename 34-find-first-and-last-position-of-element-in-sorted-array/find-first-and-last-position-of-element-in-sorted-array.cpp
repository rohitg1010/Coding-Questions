class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2,-1);
        int hi=nums.size()-1;
        int lo=0,mid;
        while(lo<=hi){
            mid = lo + (hi - lo)/2;  
            if(nums[mid]==target){
                ans[0]=mid;
                break;
            }
            else if(nums[mid]>target) hi=mid-1;
            else lo=mid+1;
        }
        int temp=mid;
        if(ans[0]!=-1){
            while(mid>=0&&nums[mid]==target) ans[0]=mid--;
            while(temp<=(nums.size()-1)&&nums[temp]==target) ans[1]=temp++;
        }
        return ans;
    }
};