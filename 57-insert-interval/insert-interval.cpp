class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
    vector<vector<int>> freq ; 
    bool ans = true ;

    if (intervals.size() == 0)
    {
         freq.push_back(newInterval) ;
 return freq ;
    }
 

for(auto &it : intervals)
{
    if (newInterval[0] <= it[1] && newInterval[1] >= it[0])
    {
        it [1] = max(it[1]  , newInterval[1]) ; 
        it [0] = min (it[0] , newInterval[0]) ; 
    
       // cout <<it[0] <<endl;
        //cout<<it[1] << endl;
        ans = false ;
        break ;
        
    }
}



// for (auto it : intervals)
// {
//    cout <<it[0] <<endl;
//         cout<<it[1] << endl;
// }
if (ans == true)
{
     intervals.push_back(newInterval) ;
     sort(intervals.begin() , intervals.end()) ;
}
vector<int> temp = intervals[0] ; 



// for (auto it : intervals)
// {
//     cout << it[0] <<endl ; 
//     cout <<it[1] << endl;
// }

for (auto it : intervals)
{
    if (it[0] <= temp[1] && it[1]>= temp[0])
    {
        temp[1] = max(temp[1] , it[1]) ;
    }
    else{
        freq.push_back(temp) ; 
        cout << temp[0] << endl;
           cout << temp[1] << endl;
        temp = it ; 
    }
}

freq.push_back(temp) ;



return freq;

    }
};