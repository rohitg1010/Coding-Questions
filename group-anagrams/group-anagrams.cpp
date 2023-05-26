class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(auto it:strs){
            string t=it;
            sort(t.begin(),t.end());
            // if(mp.find(t)==mp.end()){
            //     mp[t].push_back(it);
            // }
            // else mp[t].push_back(it);
            mp[t].push_back(it);
        } 
        for(auto it:mp){
            vector<string> t=it.second;
            ans.push_back(t);
        }
        return ans;
    }
};