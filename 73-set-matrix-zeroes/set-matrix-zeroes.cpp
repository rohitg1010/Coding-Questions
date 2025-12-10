class Solution {
public:

void row (vector<vector<int>>& matrix , int i , int j , int n , int m)
{
    for (int j = 0 ; j < m ; j++ )
    {
        if (matrix[i][j] != 0)
    matrix[i][j] = -1000000000 ;
    }
}

void col(vector<vector<int>>& matrix , int i , int j , int n , int m)
{
    for (int i = 0 ; i < n ; i++)
    {
        if (matrix [i][j] != 0)
    matrix[i][j] = - 1000000000 ;
    }
}

    void setZeroes(vector<vector<int>>& matrix) {
        
int n = matrix.size() ; 
int m = matrix[0].size() ; 
vector <int> answer ; 

for (int i = 0 ; i < n ; i++)
{

    for (int j = 0 ; j < m ; j++)
    {
        if (matrix[i][j] == 0)
        {
            row(matrix , i , j , n , m) ; 
            col(matrix , i , j , n , m) ;
        }
    }
}


for (int i = 0 ; i < n ; i++)
{
    for (int j = 0 ; j < m ; j++)
    {
        if (matrix[i][j] == -1000000000)
        matrix[i][j] = 0 ;
    }
}

return ;


    }
};