class Solution {
public:
    int maxPower(string s) {
        int maxi=0;
        int i=0,j=1,n=s.size();
        while(j<=n){
            int t=1;
            while(s[i]==s[j]){
                t++;
                j++;
            }
            i=j;
            j++;
            maxi=max(maxi,t);
        }
        return maxi;
    }
};