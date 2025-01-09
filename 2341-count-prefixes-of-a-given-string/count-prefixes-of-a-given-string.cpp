class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int sz = s.size(),n=words.size(),ans=0;
        for(int i=0;i<n;i++){
            //cout<<words[i]<<endl;
            int sub = words[i].size();
            if(sub<=sz){
                //cout<<words[i]<<endl;
                string st = s.substr(0,sub);
                if(st==words[i]) ans++;
            }
        }
        return ans;
    }
};