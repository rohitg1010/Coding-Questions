class Solution {
public:
    int reverse(int x) {
        int val=INT_MIN,val2=INT_MAX;
        bool neg=false;
        if(x<=val||x>=val2) return 0;
        if(x<0){
            neg=true;
            x*=-1;
        }
        long int ans=0;
        while(x){
            if(ans*10>INT_MAX||ans*10<INT_MIN) return 0;
            ans=(ans*10)+(x%10);
            x/=10;
        }
        if(neg) ans*=-1;
        return ans;
    }
};