class Solution {
public:
    string countAndSay(int n) {
        if (n ==1)
        return "1" ; 
        if (n == 2)
        return "11" ;
n = n - 2; 
string s = "11" ;

for (int  i = 0 ; i < n ; i++)
{
string temp = "" ; 
s = s + '$' ; 
int count = 1 ; 

for (int i = 1 ; i < s.size() ; i++)
{
if (s[i] == s[i-1])
count ++ ; 
else
{
    temp = temp + to_string(count) + s[i-1] ;
    count = 1 ; 
}
}

s = temp ;
}
return s ;
    }
};