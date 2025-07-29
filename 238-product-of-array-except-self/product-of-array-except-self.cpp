class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, 1);

    // Pass 1: Compute prefix product for each index
    int prefix = 1;
    for(int i = 0; i < n; i++) {
        result[i] = prefix;
        cout<<result[i]<<" ";
        prefix *= nums[i];
    }
    cout<<endl;
    // Pass 2: Multiply with suffix product
    int suffix = 1;
    for(int i = n - 1; i >= 0; i--) {
        result[i] *= suffix;
        cout<<result[i]<<" ";
        suffix *= nums[i];
    }

    return result;
}

};