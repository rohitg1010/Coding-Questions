class Solution {
public:


int answer (string & s , string& temp , int i , int j ,  vector<vector<int>>&dp)
{
    if (i >= s.size() || j >= temp.size())
    return 0 ; 

    if (dp[i][j] != -1)
    return dp[i][j] ;

    if (s[i] == temp[j])
    return 1 + answer(s , temp , i+1 , j+1 , dp) ;
    
    int take = answer(s , temp , i+1 , j , dp) ;
    int notake = answer(s , temp , i , j+1 , dp)  ;

    return dp[i][j] = max(take , notake) ;
}


    int minInsertions(string s) {

        string temp = s ; 
        reverse(temp.begin() , temp.end()) ;
        vector<vector<int>>dp(s.size() , vector<int>(s.size() , -1)) ;

        int k = answer(s , temp , 0 , 0 , dp) ;

        return s.size() - k;


        
    }
};