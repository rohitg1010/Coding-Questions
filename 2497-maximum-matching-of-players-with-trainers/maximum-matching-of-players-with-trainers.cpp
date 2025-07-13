class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int n=players.size(),m=trainers.size();
        int idx=0,ans=0;
        for(int i=0;i<m;i++){
            if(trainers[i]>=players[idx]){
                idx++;
                ans++;
            }
            if(idx==n) break;
        }
        return ans;
    }
};