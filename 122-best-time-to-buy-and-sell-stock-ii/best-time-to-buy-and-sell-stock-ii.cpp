class Solution {
public:
    int maxProfit(vector<int>& prices) {
        bool buied=false; int buy=0,sell=0,total=0;
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i]<prices[i+1]&&buied==false){
                buy=prices[i];
                buied=true;
            }
            if(prices[i]>prices[i+1]&&buied==true){
                sell=prices[i];
                buied=false;
                total+=(sell-buy);
            }
        }
        if(buied==true&&buy<prices[prices.size()-1]) total+=(prices[prices.size()-1]-buy);
        return total;
        // int res=0,n=prices.size();
        // for(int i=1;i<n;i++){
        //     if(prices[i]>prices[i-1])res=res+prices[i]-prices[i-1];
        // }
        // return res;
    }
};