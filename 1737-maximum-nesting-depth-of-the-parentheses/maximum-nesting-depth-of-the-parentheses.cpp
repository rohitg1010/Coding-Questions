#include<bits/stdc++.h>
class Solution {
public:
    int maxDepth(string s) {
        int maxi=0;
        stack<char> st;
        for(auto it:s){
            if(it=='('){
                st.push(it);
            }
            else if(it==')'){
                maxi = max(maxi, static_cast<int>(st.size()));
                st.pop();
            }
        }
        return maxi;
    }
};