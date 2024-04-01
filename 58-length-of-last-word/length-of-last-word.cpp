class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int j=n-1,i;
        while(j>=0){
            if(s[j]!=' ') break;
            else j--;
        }
        cout<<j<<endl;
        //if(j==0) return n;
        i=j;
        while(i>=0){
            if(s[i]==' ') break;
            else i--;
        }
        cout<<i<<endl;
        return j-i;
    }
};