class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int ans = -1,n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<=n-k;i++){
            unordered_set<int> st;
            for(int j=0;j<k;j++){
                st.insert(nums[i+j]);
            }
            for(auto it:st){
                cout<<it<<endl;
                mp[it]++;
            }
        }
        for(auto it:mp){
            //cout<<it.first<<" "<<it.second<<endl;
            if(it.second==1) ans = max(ans,it.first);
        }
        return ans;
    }
};