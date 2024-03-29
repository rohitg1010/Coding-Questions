class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int idx=-1,n=arr.size();
        for(int i=n-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                idx=i;
                break;
            }
        }
        if(idx==-1){
            reverse(arr.begin(),arr.end());
            // return arr;
        }
        else{
        for(int i=n-1;i>idx;i--){
            if(arr[i]>0&&arr[i]>arr[idx]){
                swap(arr[i],arr[idx]);
                break;
            }
        }
        reverse(arr.begin()+idx+1,arr.end());
        }

        // return arr;
    }
};