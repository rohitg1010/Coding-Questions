class Solution {
public:
    bool check(int t){
        while(t){
            if((t%10)==0) return false;
            t/=10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int> ans;
        for(int i=1;i<=n;i++){
            if(check(i)&&check(n-i)){
                ans.push_back(i);
                ans.push_back(n-i);
                break;
            }
        }
        return ans; 
    }
};