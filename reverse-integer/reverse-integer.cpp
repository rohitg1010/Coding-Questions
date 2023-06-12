class Solution {
public:
    int reverse(int x) {
        int val=INT_MIN,val2=INT_MAX;
        if(x>val2||x<val) return 0;
        queue<int> q;
        long long int t=x;
        if(x<0) t*=-1;
        while(t){
            q.push(t%10);
            t/=10;
        }
        bool iszero=true;
        long long int ans=0;
        while(!q.empty()){
            int st=q.front();
            q.pop();
            if(iszero==true&&st==0) continue;
            else iszero=false;
            if(ans*10>val2) return 0;
            ans=(ans*10)+st;
        }
        if(x<0) ans*=-1;
        return ans;
    }
};