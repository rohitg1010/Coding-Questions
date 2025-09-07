class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<nums.size()-1;j++){
                temp.push_back((nums[j]+nums[j+1])%10);
                //cout<<temp[j]<<" ";
            }
            cout<<endl;
            //nums.clear();
            nums=temp;
            temp.clear();
        }
        return nums[0];
    }
};