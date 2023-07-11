class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
    map<pair<int , int> , int > m;
    int cnt = 0;
    for(vector v : dominoes){
        int a = v[0] ,b = v[1];
        if(a > b) swap(a , b);
        if(m[{a , b}]) cnt += m[{a , b}];
        m[{a , b}]++;
    }
    return cnt;
}
};