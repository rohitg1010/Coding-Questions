class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int arr[3]={-1};
        int cp=0,cg=0,cm=0;
        //0-> P, 1-> G,2-> M
        for(int i=0;i<garbage.size();i++){
            for(int j=0;j<garbage[i].size();j++){
                if(garbage[i][j]=='P') {arr[0]=i; cp++;}
                else if(garbage[i][j]=='G') {arr[1]=i; cg++;} 
                else {arr[2]=i; cm++;}
            }
        }
        for(int i=1;i<travel.size();i++){
            travel[i]=travel[i-1]+travel[i];
        }
        int ans=0;
        ans=cp+cg;
        ans+=cm;
        if(arr[0]>0) ans+=travel[arr[0]-1];
        if(arr[1]>0) ans+=travel[arr[1]-1];
        if(arr[2]>0) ans+=travel[arr[2]-1];
        return ans;
    }
};