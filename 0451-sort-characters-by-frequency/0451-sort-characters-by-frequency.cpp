class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        string ans="";
        for(auto it:s){
            mp[it]++;
        }
        vector<pair<int,char>> v;
        for(auto it:mp){
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end());
        for(auto it:v){
            while(it.first!=0){
                ans+=it.second;
                it.first--;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};