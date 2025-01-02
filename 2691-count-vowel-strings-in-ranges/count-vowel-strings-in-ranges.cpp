class Solution {
public:
    int isvowel(string c){
        int sz = c.size();
        if((c[0]=='a' || c[0]=='e' || c[0]=='i' || c[0]=='o' || c[0]=='u') && 
            (c[sz-1]=='a' || c[sz-1]=='e' || c[sz-1]=='i' || c[sz-1]=='o' || c[sz-1]=='u'))
            return 1;
        return 0;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> ans;
        int n = words.size();
        vector<int> word_count(n,0);
        if(isvowel(words[0])) word_count[0]=1;
        for(int i=1;i<n;i++){
            word_count[i]+=(word_count[i-1] + isvowel(words[i]));
        }
        for(vector<int> v:queries)
        {
            if(v[0]==0)
            ans.push_back(word_count[v[1]]);
            else
            ans.push_back(word_count[v[1]]-word_count[v[0]-1]);
        }
        return ans;
    }
};