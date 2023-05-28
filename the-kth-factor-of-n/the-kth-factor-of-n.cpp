class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> fact;
        for(int i=1;i<=n;i++) if(n%i==0) fact.push_back(i);
        // fact.push_back(n);
        if(fact.size()<k) return -1;
        // for(auto it:fact) cout<<it<<" ";
        // cout<<endl;
        return fact[k-1];
    }
};