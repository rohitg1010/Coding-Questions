class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string> words;
        string temp="";
        for(int i=0;i<sentence.size();i++){
            if(sentence[i]==' '){
                words.push_back(temp);
                temp="";
            }
            else temp+=sentence[i];
        }
        if(temp!="") words.push_back(temp);
        int sz = searchWord.size(),n=words.size(),ans=-1;
        for(int i=0;i<n;i++){
            cout<<words[i]<<endl;
            if(words[i].size()>=sz){
                string st = words[i].substr(0,sz);
                if(st==searchWord) return i+1; 
            }
        }
        return ans;
    }
};