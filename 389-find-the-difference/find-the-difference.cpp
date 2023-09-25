class Solution {
public:
    char findTheDifference(string s, string t) {
        int h[26]={0},x=0;
        for(int i=0;i<t.size();i++) h[t[i]-'a']++;
        for(int i=0;i<s.size();i++) h[s[i]-'a']--;
        for(;x<26;x++){
            if(h[x]!=0) break;
        }
        return char('a'+x);
    }
};