class Solution {
public:
    int count(int n,vector<int>&arr){
        if(n<=1) return 1;
        if(arr[n]==-1) arr[n]=count(n-1,arr)+count(n-2,arr);
        return arr[n];
    }
    int climbStairs(int n) {
        // int a = 1;
        // int b = 1;
        // int c=0;
        
        // for(int i = 0; i < (n - 1); ++i) {
        //     c = a + b;
        //     a = b;
        //     b = c;
        // }
        // cout<<c<<endl;
        // return c;
        vector<int> arr(46,-1);
        return count(n,arr);
    }
};