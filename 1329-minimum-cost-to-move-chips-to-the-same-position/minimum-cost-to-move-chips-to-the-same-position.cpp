class Solution {
public:
    int minCostToMoveChips(vector<int>& pos) {
        int odd=0,even=0;
        //sort(pos.begin(),pos.end());
        for(auto i:pos){
            if(i%2==0) even++;
            else odd++;
            //cout<<i<<" ";
        }
        return min(even,odd);
    }
};