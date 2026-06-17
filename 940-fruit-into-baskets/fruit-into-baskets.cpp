class Solution {
public:
    int totalFruit(vector<int>& s) {
        unordered_map<int,int> mp;
        int i=0,j=0,ans=0;
        for(auto it:s){
            //if(it==0) continue;
            mp[it]++; j++;
            if(mp.size()<=2){
                ans=max(ans,j-i);
            }
            else{
                mp[s[i]]--;
                if(mp[s[i]]==0) mp.erase(s[i]);
                i++;
            }
        }
        return ans;
    }
};