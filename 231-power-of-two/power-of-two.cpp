class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans=0;
        if(n<0) return 0;
        if(n<=1) return n;
        for(int i=0;i<32;i++){
            if(1<<i&n) ans++;
            // cout<<((1<<i)&n)<<endl;
            if(ans>1) return false;
        }
        return true;
    }
};