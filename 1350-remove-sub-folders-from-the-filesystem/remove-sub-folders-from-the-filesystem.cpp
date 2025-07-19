class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        vector<string> ans;
        sort(folder.begin(),folder.end());
        ans.push_back(folder[0]+"/");
        int k=0;
        for(int i=1;i<folder.size();i++){
            int sz = ans[k].size();
            if(sz<=folder[i].size()){
                string s = folder[i].substr(0,sz);
                if(s!=ans[k]){
                    ans.push_back(folder[i]+"/");
                    k++;
                }
            }
            else{
                ans.push_back(folder[i]+"/");
                k++;
            }
        }
        for(int i=0;i<ans.size();i++) ans[i]=ans[i].substr(0,ans[i].size()-1);
        return ans;
    }
};