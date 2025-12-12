class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int maxi  = 0;
      
   
       set <int> sety ; 
       for (int i = 0 ; i < nums.size() ; i++)
       sety.insert(nums[i]) ;


vector <int> answer ; 

for (auto it : sety)
answer.push_back(it) ;

    sort(answer.begin() , answer.end()) ;

     if (answer.size() == 0)
       return 0 ;
       if (answer.size() ==1)
       return 1 ;

    int count = 1 ; 

    for (int i = 1 ; i < answer.size(); i++)
    {
        if (answer[i] - 1 == answer[i-1])
        count ++ ;
        else
        count = 1 ;

        maxi = max(maxi , count) ;
    }
return maxi ;

    }
};