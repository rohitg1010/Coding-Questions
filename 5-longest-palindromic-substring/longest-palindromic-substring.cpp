class Solution {
public:
    /*string longestPalindrome(string s) {
        int n = s.length();
        if(n==1)
            return s;
        vector<vector<int>> dp(n,vector<int> (n,0));
        for(int i=0;i<n;i++)
        {
            dp[i][i] = 1;  
            if(i==n-1)
                break;
            
            dp[i][i+1] = (s[i] == s[i+1]); 
        }
        for(int i=n-3;i>=0;i--)
        {
            for(int j=i+2;j<n;j++)
            {
                dp[i][j] = (s[i]==s[j] && dp[i+1][j-1]);
            }
        }
        
        int mx = INT_MIN;
        string mxPalindrom = "";
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(dp[i][j]==1 && j-i+1>mx)
                {
                    mx = j-i+1;
                    mxPalindrom = s.substr(i,j-i+1);
                }
            }
        }
        return mxPalindrom;*/
     vector<vector<int>>dp;

//function to check for pallindrome
int ispalli(string &s,int i,int j)
{
  if(i>=j)
  {
      return 1;
  }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    if(s[i]==s[j])
    {
        return dp[i][j]=ispalli(s,i+1,j-1);
    }
    return dp[i][j]= 0;
}
string longestPalindrome(string  s) {
    int n=s.length();
    int mx=0;
    string ans; // storing ans
	//resizing our dp
    dp.resize(n,vector<int>(n,-1));
    for(int i=0;i<n;++i)
    {
        for(int j=i;j<n;++j)
        { 
		//if string from i to j is  a pallindrome and its length is max so then just store it as ans
		
            if(ispalli(s,i,j))
            {
                if(j-i+1>mx)
                {
                    mx=j-i+1;
                    ans=s.substr(i,j-i+1);
                }
            }
        }
    }
    return ans;
    }
};