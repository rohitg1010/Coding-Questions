//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minRepeats(string a, string b) {
        // code here
        int h1[26],h2[26]={0};
        for(int i=0;i<a.size();i++) h1[a[i]-'a']++;
        for(int i=0;i<b.size();i++) h2[b[i]-'a']++;
        // for(int i=0;i<26;i++){
        //     if((h1[i]!=0&&h2[i]==0)||(h1[i]==0&&h2[i]!=0)) return -1;
        // }
        string s=a;
        int count=1;
        while(s.find(b)==string::npos and s.size()<=b.size())
        {
            s+=a;
            count++;
        }
        if(s.find(b)==string::npos)  return -1;
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ",&t);
    while (t--) {
        string A,B;
        getline(cin,A);
        getline(cin,B);

        Solution ob;
        cout << ob.minRepeats(A,B) << endl;
    }
    return 0;
}
// } Driver Code Ends