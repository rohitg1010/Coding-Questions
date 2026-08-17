class Solution {
public:


int answer (string & word1 , string& word2 , int i , int j ,  vector<vector<int>>&dp)
{
    if (i >= word1.size() || j >= word2.size())
    return 0 ; 

    if (dp[i][j] != -1)
    return dp[i][j] ;

    if (word1[i] == word2[j])
    return 1 + answer(word1 , word2 , i+1 , j+1 , dp) ;
    
    int take = answer(word1, word2 , i+1 , j , dp) ;
    int notake = answer(word1, word2 , i , j+1 , dp)  ;

    return dp[i][j] = max(take , notake) ;
}



    int minDistance(string word1, string word2) {

       
        vector<vector<int>>dp(word1.size() , vector<int>(word2.size() , -1)) ;

        int k = answer(word1 , word2 , 0 , 0 , dp) ;

        return word1.size() + word2.size() - k * 2;
        
    }
};