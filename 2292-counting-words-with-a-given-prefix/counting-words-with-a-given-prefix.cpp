class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int sz = pref.size(),n=words.size(),ans=0;
        for(int i=0;i<n;i++){
            if(words[i].size()>=sz){
                string st = words[i].substr(0,sz);
                if(st==pref) ans++; 
            }
        }
        return ans;
    }
};