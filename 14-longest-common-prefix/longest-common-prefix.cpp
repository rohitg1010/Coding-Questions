class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort (strs.begin() , strs.end());
        string answer = "" ;
        int n = strs.size() ;
        string  first = strs[0] ;
        string last = strs[n-1] ;

        for (int i = 0 ; i< first.size (); i++)
        {
            if (first[i] != last[i])
            {
            break ; 
            }
            else 
            {
                answer = answer + first[i] ;
            }

        }
        return answer ;
    }
};