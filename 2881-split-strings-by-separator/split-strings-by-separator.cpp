class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;
        for(int i=0;i<words.size();i++){
            string t="";
            for(int j=0;j<words[i].size();j++){
                if(words[i][j]==separator){
                    if(t.size()==0) continue;
                    else{
                        ans.push_back(t);
                        t="";
                    }
                }
                else t+=words[i][j];
            }
            if(t.size()!=0) ans.push_back(t);
        }
        return ans;
    }
};