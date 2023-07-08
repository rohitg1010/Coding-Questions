class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st;
        // for(auto it:nums1) st.insert(it);
        for(auto it:nums2){
            auto i=find(nums1.begin(),nums1.end(),it);
            if(i==nums1.end()) continue;
            else st.insert(it);
        }
        vector<int> ans;
        for(auto it:st) ans.push_back(it);
        return ans;
    }
};