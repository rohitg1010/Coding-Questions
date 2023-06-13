class Solution {
public:
    bool isPalindrome(int n) {
        string t=to_string(n);
		int s=t.size();
		for(int i=0;i<=s/2;i++) if(t[i]!=t[s-i-1]) return false;
	    return true;
    }
};