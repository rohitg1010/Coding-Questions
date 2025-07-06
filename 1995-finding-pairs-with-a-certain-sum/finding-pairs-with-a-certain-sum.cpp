class FindSumPairs {
public:
    vector<int> v1,v2;
    unordered_map<int, int> freq;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        v1=nums1;
        v2=nums2;
        for(int it:v2) freq[it]++;
    }
    
    void add(int index, int val) {
        freq[v2[index]]--;
        v2[index]+=val;
        freq[v2[index]]++;
    }
    
    int count(int tot) {
        int ans = 0;
        for(int x:v1) ans+=freq[tot-x];
        return ans;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */