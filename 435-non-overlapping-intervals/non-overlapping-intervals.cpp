class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
  
   auto cmp = [&] (vector <int> a , vector <int> b)
   {
    return a[1] < b[1] ;
   } ;
        sort(intervals.begin() , intervals.end() , cmp);
    int count = 0 ; 
    vector<int> temp = intervals[0] ; 

    for (auto it : intervals)
    {
        if (temp[1] <= it[0])
        temp = it ; 
        else
        {
            count ++ ; 
         //   temp = it ;
        }
    }
    count -- ;

    return count ;

    }
};