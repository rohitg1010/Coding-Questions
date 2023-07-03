class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        // sort(bills.begin(),bills.end());
        int five=0,ten=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==20){
                if(five==0) return false;
                else if(ten==0){
                    if(five<3) return false;
                    else five-=3;
                }
                else{
                    five--;
                    ten--;
                }
            }
            else if(bills[i]==10){
                if(five==0) return false;
                else{
                    ten++;
                    five--;
                }
            }
            else{
                five++;
            }
        }
        return true;
    }
};