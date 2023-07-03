class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        int hash[26]={0};
        vector<pair<char,char>> v;
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
            if(s[i]!=goal[i]) v.push_back({s[i],goal[i]});
        }
        if(v.size()==0){
            for(auto it:hash) if(it>1) return true;
        }
        if(v.size()==2){
            if(v[0].first==v[1].second&&v[1].first==v[0].second) return true;
        }
        return false;
    }
};