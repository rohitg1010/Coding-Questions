class Solution {
public:
    vector<int> partitionLabels(string s) {
        int h[26]={0};
        vector<int> ans;
        int start=0,end=0;
        for(int i=0;i<s.size();i++){
            h[s[i]-'a']=i;
        }
        for(int i=0;i<s.size();i++){
            end=max(end,h[s[i]-'a']);
            if(end==i){
                ans.push_back(i-start+1);
                start=end+1;
            }
        }
        return ans;
    }
};