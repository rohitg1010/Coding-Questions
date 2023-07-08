//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> ans;
    void rec(vector<int> arr,int N, int idx, int sum){
        // cout<<sum<<endl;
        if(idx==N) return;
        sum+=arr[idx];
        ans.push_back(sum);
        rec(arr,N,idx+1,sum);
        sum-=arr[idx];
        // ans.push_back(sum);
        rec(arr,N,idx+1,sum);
        return;
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        ans.push_back(0);
        rec(arr,N,0,0);
        // for(auto it:st) ans.push_back(it);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends