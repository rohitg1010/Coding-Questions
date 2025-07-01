class Solution {
public:
    vector<string> partitionString(string s) {
        unordered_set<string> st;
        vector<string> ans;
        string temp = "";
        for(int i=0;i<s.size();i++){
            temp+=s[i];
            if(st.find(temp)==st.end()){
                st.insert(temp);
                ans.push_back(temp);
                temp="";
            }
        }
        if(temp.size()>0&&st.find(temp)==st.end()){
            st.insert(temp);
            ans.push_back(temp);
            temp="";
        }
        return ans;
    }
};