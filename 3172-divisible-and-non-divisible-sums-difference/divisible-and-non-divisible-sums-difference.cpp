class Solution {
public:
    int differenceOfSums(int n, int m) {
        int div=0,non_div=0;
        for(int i=1;i<=n;i++){
            if(i%m) non_div+=i;
            else div+=i;
        }
        return non_div-div;
    }
};