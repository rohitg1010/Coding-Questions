//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int N) {
        //code here
        vector<int> sum;
        int maxi=-1;
        for(int i=0;i<mat.size();i++){
            int t=0;
            t=accumulate(mat[i].begin(),mat[i].end(),0);
            sum.push_back(t);
            maxi=max(maxi,t);
        }
        vector<int> ans;
        for(int i=0;i<sum.size();i++){
            if(sum[i]==maxi){
                ans.push_back(i);
                ans.push_back(sum[i]);
                break;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<vector<int>> arr(n, vector<int> (n));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> arr[i][j];
        Solution obj;
        vector<int> ans = obj.findMaxRow(arr, n);
        for(int val : ans) {
            cout << val << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends