class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int cnt=0,ans=0;
        for(auto it:batteryPercentages){
            it=max(0,it-cnt);
            if(it>0){
                cnt++;
                ans++;
            }
        }
        return ans;
    }
};