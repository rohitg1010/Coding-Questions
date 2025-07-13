class Solution {
public:
    string processStr(string s) {
        string result = "";
        for(auto it:s){
            if(it=='*'){
                if(result.size()>0) result.pop_back();
            } 
            else if(it=='#'){
                if(result.size()>0) result+=result;
            } 
            else if(it=='%'){
                if(result.size()>0) reverse(result.begin(),result.end());
            }
            else result+=it;
        }
        return result;
    }
};