class Solution {
public:
    char mirror(char ch) {
        return 'a' + 'z' - ch ;
    }
    long long calculateScore(string s) {
        map<char , set<int>> map ;
        map[s[0]].insert(0) ;
        long long score = 0 ;
        for(int i=1 ; i < s.size() ; i++) {
            char mir = mirror(s[i]) ;
            cout << mir << " " ;
            if( map.find(mir) != map.end() && map[mir].size() > 0 ) {
                //if( map[mir].size() > 0 ) {
                    auto it = map[mir].rbegin() ;
                    score += i - *it ;
                    map[mir].erase(*it) ;
                //}
            } else {
                map[s[i]].insert(i) ;
            }
        }
        return score ;
    }
};