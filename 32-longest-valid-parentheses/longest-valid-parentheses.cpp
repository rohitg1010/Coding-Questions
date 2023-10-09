class Solution {
public:
    int longestValidParentheses(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                int count=0;
                for(int j=i;j<s.size();j++){
                    if(s[j]=='(') count++;
                    else count--;
                    if(count==0) ans=max(ans,j-i+1);
                    if(count<0){
                        ans=max(ans,j-i);
                        break;
                    }
                }
            }
        }
        return ans;
    }
};