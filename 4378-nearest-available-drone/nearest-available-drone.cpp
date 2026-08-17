class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int ans = -1,n=drones.size(),curr=INT_MAX;
        for(int i=0;i<n;i++){
            int temp = abs(drones[i][0]-target[0]) + abs(drones[i][1]-target[1]);
            //cout<<temp<<" "<<curr<<endl;
            if(temp<=drones[i][2]&&curr>temp){
                ans=i;
                //cout<<"ans "<<ans<<endl;
                curr=temp;
            }
        }
        return ans;
    }
};