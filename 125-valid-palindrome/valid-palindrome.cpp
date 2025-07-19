class Solution {
public:
    char isValid(char c){
        if((c>='a'&&c<='z')||(c>='0'&&c<='9')) return c;
        if(c>='A'&&c<='Z') return c+32;
        return '*';
    }
    bool isPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            char c1 = isValid(s[i]);
            char c2 = isValid(s[j]);
            if(c1=='*'){
                i++;
                continue;
            }
            if(c2=='*'){
                j--;
                continue;
            }
            if(c1!=c2) return false;
            i++; j--;
        }
        return true;
    }
};