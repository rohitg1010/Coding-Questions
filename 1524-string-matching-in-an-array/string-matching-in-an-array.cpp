class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        unordered_set<string> st;
        int n=words.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(words[i]!=words[j]){
                    int pos = words[i].find(words[j]);
                    //cout<<pos<<" ";
                    if(pos!= string::npos){
                        st.insert(words[j]);
                    }
                }
            }
        }
        for(auto s:st){
            ans.push_back(s);
        }
        return ans;
    }
};