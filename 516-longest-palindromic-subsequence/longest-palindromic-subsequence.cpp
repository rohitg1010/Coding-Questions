class Solution {
public:


int answer (string & s , string & s1 ,  int i, int j , vector<vector<int>>& dp)
{

if (i == s.size() || j == s1.size())
return 0 ;

if (dp[i][j] != -1)
return dp[i][j] ;

if (s[i] == s1[j])
return dp[i][j] = 1 + answer(s , s1 , i+1 , j+1 , dp) ;

int take = answer(s , s1 , i+1 , j , dp) ;

int notake = answer(s ,s1 ,  i , j + 1 ,dp) ;

return dp[i][j] = max(take ,notake) ;

}


    int longestPalindromeSubseq(string s) {
        reverse(s.begin() ,s.end()) ; 
        string s1 = s ;
         reverse(s.begin() ,s.end()) ; 

        vector<vector<int>>dp(s.size() , vector<int>(s.size() , -1)) ;


        int k = answer(s , s1 , 0 , 0 , dp) ;

        return k ;
        
    }
};