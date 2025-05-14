class Solution {
public:
    int minOperations(vector<int>& nums) {
        stack<int> st;
        st.push(-1);
        int ans = 0;
        int i = nums.size()-1;
        while(i>=0) {
            // pop all invalid elements from top of stack
            while(st.top()>nums[i]) st.pop();
            // stack top if is smaller than current element then increase ans
            ans += nums[i]!=0 && st.top()<nums[i];
            st.push(nums[i]);
            i--;
        }
        return ans;
    }
};