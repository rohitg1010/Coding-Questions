class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> indexes; int i=0;
        for(string s:words){
            if(s.find(x)!=string::npos) indexes.push_back(i);
            i++;
        }
        return indexes;
    }
};