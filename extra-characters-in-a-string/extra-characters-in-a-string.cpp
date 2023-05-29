class Solution {
public:
    int minExtraChar(string inputString, vector<string>& dictionary) {
        // Convert dictionary vector into an unordered_set for efficient lookup
        unordered_set<string> dictSet(dictionary.begin(), dictionary.end());
        
        int n = inputString.length();
        // Create a dynamic programming table to store minimum extra characters needed
        // to form valid words ending at each index
        vector<int> dp(n + 1, n);

        dp[0] = 0;  // Base case: no extra characters needed to form a valid word at index 0

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                // Extract the substring from index j to i (exclusive)
                string sub = inputString.substr(j, i - j);
                
                // If the substring is found in the dictionary, update dp[i]
                if (dictSet.count(sub) > 0) {
                    dp[i] = min(dp[i], dp[j]);  // No extra characters needed if word is found
                }
            }
            // Compare the current dp[i] with the minimum extra characters needed from previous index
            dp[i] = min(dp[i], dp[i - 1] + 1);
        }

        return dp[n];  // Return the minimum extra characters needed to form valid words
    }
};