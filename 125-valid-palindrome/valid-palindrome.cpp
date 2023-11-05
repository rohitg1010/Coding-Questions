class Solution {
public:
    bool isPalindrome(string s) {
        string og="";
        for(auto it:s){
            if(it>='a'&&it<='z') og+=it;
            else if(it>='A'&&it<='Z') og+=(it+32);
            else if(it>='0'&&it<='9') og+=it;
        }
        int i=0,j=og.size()-1;
        while(i<j){
            if(og[i]!=og[j]) return false;
            else{
                i++;j--;
            }
        }
        return true;
    }
};