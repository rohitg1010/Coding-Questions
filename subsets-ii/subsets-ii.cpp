class Solution {
public:
    set<vector<int>> st;
    void rec(vector<int> arr,int N, int idx, vector<int> &temp){
        // cout<<sum<<endl;
        if(idx==N) return;
        temp.push_back(arr[idx]);
        // sort(temp.begin(),temp.end());
        st.insert(temp);
        rec(arr,N,idx+1,temp);
        temp.pop_back();
        // ans.push_back(sum);
        rec(arr,N,idx+1,temp);
        return;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        ans.push_back(temp);
        rec(nums,nums.size(),0,temp);
        for(auto it:st) ans.push_back(it);
        return ans;
    }
};