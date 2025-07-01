class Solution {
public:
    int possibleStringCount(string word) {
        // vector<int> count(26,0);
        // for(auto it:word) count[it-'a']++;
        // int ans=0;
        // for(int i=0;i<26;i++){
        //     if(count[i]>1){
        //         ans+=(count[i]-1);
        //     }
        // }
        // return ans+1;
        int ans=0;
        for(int i=1;i<word.size();i++){
            if(word[i]==word[i-1]) ans++;
        }
        return ans+1;
    }
};