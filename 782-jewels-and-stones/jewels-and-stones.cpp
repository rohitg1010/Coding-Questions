class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> st;
        int ans=0;
        for(auto it:jewels) st.insert(it);
        for(auto it:stones){
            if(st.find(it)!=st.end()) ans++;
        }
        return ans;
    }
};