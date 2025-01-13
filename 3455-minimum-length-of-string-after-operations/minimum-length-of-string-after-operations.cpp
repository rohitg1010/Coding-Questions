class Solution {
public:
    int minimumLength(string s) {
        vector<int> count(26,0);
        int ans=0;
        for(auto it:s){
            count[it-'a']++;
        }
        for(int i=0;i<26;i++){
            if(count[i]==0) continue;
            if(count[i]%2==0){
                ans+=2;
            }
            else ans+=1;
        }
        return ans;
    }
};