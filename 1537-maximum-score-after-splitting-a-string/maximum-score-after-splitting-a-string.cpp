class Solution {
public:
    int maxScore(string s) {
        int ans = -1,cnt=0,n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='1') cnt++;
        }
        int j = 0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='0'){
                j++;
            }
            else cnt--;
            ans=max(ans,j+cnt);
        }
        return ans;
    }
};