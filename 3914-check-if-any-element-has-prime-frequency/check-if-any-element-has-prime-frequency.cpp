class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_set<int> primes = {
            2, 3, 5, 7, 11,
            13, 17, 19, 23, 29,
            31, 37, 41, 43, 47,
            53, 59, 61, 67, 71,
            73, 79, 83, 89, 97
        };

        unordered_map<int, int> mp;
        for (auto it : nums) {
            mp[it]++;
        }

        for (auto it : mp) {
            if (primes.find(it.second) != primes.end()) {
                return true;
            }
        }

        return false;
    }
};