class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        int abuy,cbuy,anbuy,cnbuy;
        abuy=anbuy=0;
        for(int i=n-1;i>=0;i--){
            cnbuy=max(prices[i]-fee+abuy,0+anbuy);
            cbuy=max(-prices[i]+anbuy,0+abuy);
            abuy=cbuy;
            anbuy=cnbuy;
        }
        return abuy;
    }
};