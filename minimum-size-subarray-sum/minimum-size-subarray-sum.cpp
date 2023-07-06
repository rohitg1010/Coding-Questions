class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0,n=nums.size();
        int currsum=0,sz=INT_MAX;
        while(j<n){
            currsum+=nums[j];
            while(currsum>=target){
                currsum-=nums[i];
                sz=min(sz,(j-i)+1);
                i++;
            }
            j++;
        }
        if(sz==INT_MAX) return 0;
        return sz;
    }
};