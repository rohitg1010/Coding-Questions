class Solution {
public:
    bool isSubsequence(string s, string t) {
        queue<char> st;
        for(int i=0;i<s.size();i++){
            st.push(s[i]);
        }
        for(int i=0;i<t.size();i++){
            if(t[i]==st.front()&&(!st.empty())){
                st.pop();
            }
        }
        if(st.empty()) return true;
        return false;
        /*int j=0;
        for(int i=0;i<t.size();i++){
            if(t[i]==s[j]) j++;
        }
        /*if(j==s.size()) return true;
        else return false;*/
    }
};