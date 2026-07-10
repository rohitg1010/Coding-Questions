class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        unordered_map<int,int> mp;
        int max_diff = INT_MIN;
        for(auto it:nums){
            int temp = 0,maxi=INT_MIN,mini=INT_MAX,n=it;
                while(it){
                temp=it%10;
                maxi=max(maxi,temp);
                mini=min(mini,temp);
                it/=10;
            }
            if(mp.find(maxi-mini)!=mp.end()) mp[maxi-mini]+=n;
            else mp[maxi-mini]=n;
            max_diff=max(max_diff,maxi-mini);
        }
        return mp[max_diff];
    }
};