class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len=INT_MAX; string temp="",ans="";bool flag=false;
        for(int i=0;i<strs.size();i++){
            if(strs[i].size()<len){
                len=strs[i].length();
                temp=strs[i];
            }
        }
        for(int j=0;j<len;j++){
            //flag=false;
            for(int i=0;i<strs.size();i++){
                if((temp[j]!=strs[i][j])&&flag==false){
                    flag=true;
                    //break;
                }
            }
            if(flag==false) ans+=temp[j];
        }
        return ans;
    }
};