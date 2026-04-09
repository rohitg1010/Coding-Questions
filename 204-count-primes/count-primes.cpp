class Solution {
public:
    int countPrimes(int n) {

        vector <int> temp (n+1) ; 

        if (n == 2)
        return 0 ;

        for (int i = 2; i <= n ; i++)
        {

           temp[i] = 1 ;
        }

        for (int i = 2 ; i <= n ; i++)
        {
            if (temp [i] ==1)
            {
                for (int j = i*2 ; j <=n ; j = j +i)
                {
                    temp[j] = 0 ;
                }
            }
        }
        int count = 0 ;

        for (int i = 2 ; i < temp.size()-1 ; i++)
        {
            if (temp[i] == 1)
            count ++ ;
        }

        return count ;
        
    }
};

