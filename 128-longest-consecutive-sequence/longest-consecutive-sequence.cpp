class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        int maxi = 1;
        unordered_set<int> st;
        for(int it:nums) st.insert(it);
        for(int it:st){
            if(st.count(it-1)) continue;
            else{
                int curr = 1;
                int val = it;
                while(st.count(val+1)){
                    curr++;
                    val++;
                }
                maxi=max(maxi,curr);
            }
        }
        return maxi;
    }
};