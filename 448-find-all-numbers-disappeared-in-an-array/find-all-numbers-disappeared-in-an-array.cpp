class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> count(n+1,0),ans;
        for(auto it:nums){
            count[it]++;
        }
        for(int i=1;i<=n;i++){
            if(count[i]==0) ans.push_back(i);
        }
        return ans;
    }
};