class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>> st;
        int x=0,y=0;
        st.insert({x,y});
        for(auto it:path){
            if(it=='N'){
                y++;
            }
            else if(it=='S'){
                y--;
            }
            else if(it=='E'){
                x++;
            }
            else x--;
            // cout<<x<<" "<<y<<endl;
            if(st.find({x,y})==st.end()){
                st.insert({x,y});
            }
            else return true;
        }
        return false;
    }
};