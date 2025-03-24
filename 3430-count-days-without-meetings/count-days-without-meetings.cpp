class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        vector<vector<int>> merged_meetings;
        int n=meetings.size();
        merged_meetings.push_back(meetings[0]);
        for(int i=1;i<n;i++){
            vector<int> temp = merged_meetings.back();
            if(meetings[i][0]<=temp[1]){
                temp[0] = min(meetings[i][0],temp[0]);
                temp[1] = max(meetings[i][1],temp[1]);
                merged_meetings.pop_back();
                merged_meetings.push_back(temp);
            }
            else{
                merged_meetings.push_back(meetings[i]);
            }
        }
        int ans = 0;
        for(int i=0;i<merged_meetings.size();i++){
            //cout<<merged_meetings[i][0]<<" "<<merged_meetings[i][1]<<endl;
            ans+=(merged_meetings[i][1]-merged_meetings[i][0])+1;
        }
        return days-ans;
    }
};