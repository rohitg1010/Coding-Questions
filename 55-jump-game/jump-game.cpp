class Solution {
public:
    bool canJump(vector<int>& nums) {
        int sz=nums.size()-1;
        for(int i=sz;i>=0;i--){
            if((sz-i)<=nums[i])
                sz=i;
        }
        return sz==0;
    }
};
