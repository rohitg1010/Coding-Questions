class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> count(n+1,0);
        for(int i=1;i<=n;i++){
          // cout<<count[i]<<" "<<count[i&(i-1)]<<endl;
          count[i] = 1 + count[i&(i-1)];
          // cout<<i&(i-1)<<" ";
          // cout<<count[i]<<" "<<count[i&(i-1)]<<endl;
        }
        // for(int i=0;i<=n;i++){
        //     count.push_back(__builtin_popcount(i));
        // }
        return count;
    }
};