//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    void reverse(int nums[],int low,int high){
        while(low<high){
            swap(nums[low],nums[high]);
            low++;
            high--;
        }
    }
	void leftRotate(int arr[], int n, int k) 
	{ 
	   // Your code goes here
	   k%=n;
	   reverse(arr,0,n-1);
	   reverse(arr,0,n-k-1);
	   reverse(arr,n-k,n-1);
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> d;
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}



// } Driver Code Ends