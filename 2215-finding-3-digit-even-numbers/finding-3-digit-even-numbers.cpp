class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> ans,hash(10,0);
        for(auto it:digits) hash[it]++;
        for(int i=100;i<999;i+=2){
            int a = --hash[i/100];
            int b = --hash[i%10];
            int c = --hash[(i/10)%10];
            if(a>=0&&b>=0&&c>=0) ans.push_back(i);
            hash[i/100]++;
            hash[i%10]++;
            hash[(i/10)%10]++;
        }
        return ans; 
    }
};