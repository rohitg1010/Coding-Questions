class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int n=nums.size(),ans=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int last=nums[j]%10,first;
                int t=nums[i];
                while(t>=10) t/=10;
                first=t;
                if(__gcd(first,last)==1) ans++;
            }
        }
        return ans;
    }
};