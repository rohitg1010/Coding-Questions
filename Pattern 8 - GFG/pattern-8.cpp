//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    for (int i = n; i >= 1; --i) {
          for (int space = 0; space < n - i; ++space) cout<<" ";
          for (int j = i; j <= 2 * i - 1; ++j) cout<<'*';
          for (int j = 0; j < i - 1; ++j) cout<<'*';
          cout<<endl;
       }
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends