class Solution {
public:
    bool isPrime(int num) {
        if (num < 2)
            return false;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0)
                return false;
        }
        return true;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int> prime;
        for (int i = left; i <= right; i++) {
            if (isPrime(i)) {
                prime.push_back(i);
            }
        }
        vector<int> ans(2,-1);
        int primes=prime.size(),mini=INT_MAX;
        if(primes<2) return ans;
        for(int i=1;i<primes;i++){
            if(prime[i]-prime[i-1]<mini){
                mini=prime[i]-prime[i-1];
                ans[0]=prime[i-1];
                ans[1]=prime[i];
            }
        }
        return ans;
    }
};