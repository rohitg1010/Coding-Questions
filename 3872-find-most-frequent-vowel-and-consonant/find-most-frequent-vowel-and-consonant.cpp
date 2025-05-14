class Solution {
public:
    int maxFreqSum(string s) {
        int arr[26]={0};
        for(char it:s) arr[it-'a']++;
        int maxi_vow = 0,maxi_con = 0;
        for(int i=0;i<26;i++){
            if(i==0||i==4||i==8||i==14||i==20){
                maxi_vow=max(maxi_vow,arr[i]);
            }
            else{
                maxi_con=max(maxi_con,arr[i]);
            }
        }
        return maxi_con+maxi_vow;
    }
};