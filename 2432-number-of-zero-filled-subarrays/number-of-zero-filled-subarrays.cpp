class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n=nums.size();
        //int arr[n];
        long long sum=0,c=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0) c=0;
            else{
                c++;
                //arr[i]=c;
            }
            sum+=c;
        }
        return sum;
    }
};