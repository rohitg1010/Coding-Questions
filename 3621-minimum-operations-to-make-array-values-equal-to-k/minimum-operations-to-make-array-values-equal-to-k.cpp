class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int> st;
        for(auto it:nums) st.insert(it);
        int ans = 0;
        for(auto it:st){
            if(it<k) return -1;
            if(it>k) ans++;
        } 
        return ans;
    }
};