class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

string s ; 

        for (int i = 0 ; i < digits.size() ; i++)
        {
            char c = digits[i] + '0' ;
           
           s =  s + c ; 

        }


        reverse(s.begin() , s.end()) ; 
         cout << "Loop Of string Start" << endl;

        for (int i = 0 ; i < s.size() ; i++)
        {
            cout << s[i] << endl;
        }


        char want = s[0] ; 

        cout << "Want is " << want << endl;

        if (want != '9')
        {
            int k = want - '0' ; 
            k ++ ; 
            s[0] = k + '0' ; 

             cout << "Enter not 9 " << s[0] << endl;

        }
        
        int i = 0 ; 
        int carry = 0 ; 
        if (want == '9')
        {
            cout << "Enter  9 " << endl;
while (i < s.size() && s[i] == '9')
{
    if (s[i] == '9')
    {
        carry = 1 ; 
        s[i] = '0' ; 
    }

    i++ ; 

}


   cout << "Loop Of string  Start 2" << endl;

        for (int i = 0 ; i < s.size() ; i++)
        {
            cout << s[i] << endl;
        }



if (carry == 1 && i < s.size())
{
 int k = s[i] - '0' ; 
            k ++ ; 
            s[i] = k + '0' ; 
            carry = 0 ; 
}
else if (carry == 1)
{
    s = s + '1' ;

}

        }

         cout << "Loop Of string  Start 3" << endl;

        for (int i = 0 ; i < s.size() ; i++)
        {
            cout << s[i] << endl;
        }


       
         reverse(s.begin() , s.end()) ; 
   
        vector <int> temp ;  

        for (int i = 0 ; i < s.size() ; i++)
        {
            int k = s[i] - '0' ; 
            temp.push_back(k) ;

        }
        
        return temp ;
    }
};