class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> ans;
        for(auto it:arr){
            if(it==0){
                ans.push_back(0);
                if(arr.size()==ans.size()) break;
                ans.push_back(0);
            }
            else ans.push_back(it);
            if(arr.size()==ans.size()) break;
        }
        arr=ans;
    }
};