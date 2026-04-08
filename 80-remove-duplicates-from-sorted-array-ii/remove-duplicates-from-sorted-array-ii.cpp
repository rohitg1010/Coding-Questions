class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /*map<int,int> st;
        for(auto it:nums) st[it]++;
        int i=0,ans=0;
        for(auto it:st){
            //cout<<it.first<<" "<<it.second<<endl;
            if(st[it.first]>=2){
                nums[i]=nums[i+1]=it.first;
                i+=2;
                ans+=2;
            }
            else{
                nums[i]=it.first;
                i++;ans++;
            }   
        }
        return ans;*/
        int i = 0,j=0;
        while(i<nums.size()){
            if(j>1&&nums[i]==nums[j-2]){
                i++;
            }
            else{
                swap(nums[i++],nums[j++]);
            }
        }
        return j;
    }
};