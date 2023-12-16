class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> h1(26,0);
        vector<int> h2(26,0);
        for(auto it:s) h1[it-'a']++;
        for(auto it:t) h2[it-'a']++;
        return h1==h2;
    }
};