class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        /*sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++) if(nums[i]==nums[i+1]) return nums[i];
        */
        vector<int> hash(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(hash[nums[i]]<1) hash[nums[i]]++;
            else return nums[i];
        }
        return -1;
    }
};