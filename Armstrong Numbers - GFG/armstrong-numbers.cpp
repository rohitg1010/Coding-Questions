//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int c=0;
        int temp=n;
        while(temp){
            c++;
            temp/=10;
        }
        int sum=0;
        //cout<<c<<endl;
        temp=n;
        while(temp){
            int digit=temp%10;
            int t=1;
            for(int i=0;i<c;i++) t*=digit;
            sum+=t;
            temp/=10; 
        }
        //cout<<sum<<endl;
        if(sum==n) return "Yes";
        else return "No";
        }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends