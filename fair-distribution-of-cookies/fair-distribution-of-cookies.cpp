class Solution {
public:
    void solve(int i, vector<int>& cookies, int k, int& ans,vector<int> &bucket)
    {
        //Base case
        if(i<0)
        {
            ans = min(ans, *max_element(bucket.begin(), bucket.end()));
            return ;
        }
        if(*max_element(bucket.begin(), bucket.end()) > ans) return;
        for(int idx = 0;idx<k;idx++)
        {
            bucket[idx] += cookies[i];
            solve(i-1, cookies, k, ans, bucket);
            bucket[idx] -= cookies[i];
        }
    }
    int distributeCookies(vector<int>& cookies, int k) {
        int n = cookies.size();
        vector<int> bucket(k, 0);
        int ans = INT_MAX;
        solve(n-1,cookies, k,ans, bucket);
        return ans;
    }
};