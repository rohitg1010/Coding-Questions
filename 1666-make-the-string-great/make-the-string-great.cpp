class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]>='A'&&s[i]<='Z'){
                char ch=tolower(s[i]);
                if(!st.empty()&&st.top()==ch) st.pop();
                else if(i<s.size()-1&&s[i+1]==ch) i++;
                else st.push(s[i]);
            }
            else{
                char ch=toupper(s[i]);
                if(!st.empty()&&st.top()==ch) st.pop();
                else if(i<s.size()-1&&s[i+1]==ch) i++;
                else st.push(s[i]);
            }
        }
        string temp="";
        while(!st.empty()){
            temp+=st.top();
            st.pop();
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};