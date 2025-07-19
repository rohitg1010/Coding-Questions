class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<int> result;

        // Step 1: Count frequencies
        for (int num : nums) {
            freq[num]++;
        }

        // Step 2: Pick max freq element k times
        for (int i = 0; i < k; ++i) {
            int maxFreq = 0;
            int maxElem = 0;
            for (auto& [num, f] : freq) {
                if (f > maxFreq) {
                    maxFreq = f;
                    maxElem = num;
                }
            }
            result.push_back(maxElem);
            freq.erase(maxElem); // remove picked element
        }

        return result;
    }
};