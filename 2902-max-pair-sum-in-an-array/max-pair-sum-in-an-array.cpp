class Solution {
public:
    int maxSum(vector<int>& nums) {
        vector<vector<int>> v(10);
        for(int i=0;i<nums.size();i++){
            string temp=to_string(nums[i]);
            sort(temp.begin(),temp.end(),greater<char>());
            v[temp[0]-'0'].push_back(nums[i]);
        }
        int maxi=-1;
        /*for(int i=0;i<10;i++){
            for(int j=0;j<v[i].size();j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }*/
        for(int i=0;i<10;i++){
            if(v[i].size()>1){
                for(int j=0;j<v[i].size()-1;j++){
                    for(int k=j+1;k<v[i].size();k++){
                        maxi=max(maxi,v[i][j]+v[i][k]);
                    }
                }
            }
        }
        return maxi;
    }
};