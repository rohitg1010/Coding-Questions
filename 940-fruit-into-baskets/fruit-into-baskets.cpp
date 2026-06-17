class Solution {
public:
    int totalFruit(vector<int>& s) {
        unordered_map<int,int> mp;
        int n=s.size(),i=0,j=0,ans=-1;
        for(auto it:s){
            mp[it]++; j++;
            if(mp.size()<=2){
                ans=max(ans,j-i);
            }
            while(mp.size()>2){
                mp[s[i]]--;
                if(mp[s[i]]==0) mp.erase(s[i]);
                i++;
            }
        }
        return ans;
    }
};