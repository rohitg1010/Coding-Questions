class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end(),greater<int>());
        sort(discounts.begin(),discounts.end(),greater<int>());
        double fnlprz=0;
        for(int i=0;i<prices.size();i++){
            //cout<<prices[i]<<" ";
            if(i<discounts.size()){
                fnlprz+=(double(prices[i]-double(prices[i]*discounts[i])/100));
                //cout<<discounts[i]<<endl;
            }
            else fnlprz+=double(prices[i]);
        }
        return fnlprz;
    }
};