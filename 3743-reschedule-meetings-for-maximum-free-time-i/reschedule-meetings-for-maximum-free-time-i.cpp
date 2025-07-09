class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        int maxi = 0,n=startTime.size(),sum=0;
        vector<int> gaps;
        gaps.push_back(startTime[0]);
        for(int i=1;i<n;i++){
            //cout<<maxi<<" "<<i<<endl;
            //cout<<endTime[i-1]-startTime[i]<<endl;
            gaps.push_back(abs(endTime[i-1]-startTime[i]));
            //maxi=max(maxi,abs(endTime[i-1]-startTime[i]));
        }
        gaps.push_back(abs(eventTime-endTime[n-1]));
        int i=0,j=k;
        for(int t = i;t<=n&&t<=j;t++) sum+=gaps[t];
        maxi=max(maxi,sum);
        while(j<n){
            sum-=gaps[i++];
            sum+=gaps[++j];
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};