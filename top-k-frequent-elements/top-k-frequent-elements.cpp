class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        /*if(nums.size()<=1) return nums;
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int i=0,n=nums.size()-1;
        while(i<n&&k>0){
                if(nums[i]!=nums[i+1]){ans.push_back(nums[i]);
                k--;}
            i++;
        }
        if(k>0)
            ans.push_back(nums[n]);
        return ans;*/
        if(nums.size()<=1) return nums;
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>>pq;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        unordered_map<int,int>::iterator it=mp.begin();
        for(;it!=mp.end();it++){
            pq.push(make_pair(it->second,it->first));
        }
        int a=0;
        while(a<k){
            ans.push_back(pq.top().second);
            pq.pop();
            a++;
        }
        return ans;
    }
};