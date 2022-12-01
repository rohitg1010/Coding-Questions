class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=0,i=0;
        for(;i<s.size()/2;i++){                                          if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||                                                       s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') n++; 
        }
        for(;i<s.size();i++){                                          if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||                                                       s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') n--; 
        }
        return (n==0);
    }
};