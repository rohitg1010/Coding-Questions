//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long fact(long long i){
        if(i==0||i==1) return 1;
        else return i*fact(i-1);
    }
    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        int i=1;
        vector<long long> ans;
        while(fact(i)<=N){
            ans.push_back(fact(i));
            i++;
        }
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
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends