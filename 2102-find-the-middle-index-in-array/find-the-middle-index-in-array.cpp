class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> pre(n+2,0),post(n+2,0);
        for(int i=0;i<n;i++){
            pre[i+1]+=(nums[i]+pre[i]);
            post[n-i]+=(nums[n-i-1]+post[n-i+1]);
        }
        /*
        for(auto it:pre) cout<<it<<" ";
        cout<<endl;
        for(auto it:post) cout<<it<<" ";
        cout<<endl;
        */
        for(int i=1;i<=n;i++){
            if(pre[i-1]==post[i+1]) return i-1;
        }
        return -1;
    }
};