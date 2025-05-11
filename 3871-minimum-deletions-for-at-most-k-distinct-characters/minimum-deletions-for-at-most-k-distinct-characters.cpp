class Solution {
public:
    int minDeletion(string s, int k) {
        int n = s.size();
        vector<int> freq(26, 0);
        for (int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }
        int cnt = 0;
        sort(freq.begin(), freq.end());
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                cnt++;
            }
        }
        if (cnt == k)
            return 0;
        else {
            int u = cnt - k;
            int ans = 0;
            for (int i = 0; i < 26; i++) {
                if (freq[i] != 0 && u > 0) {
                    ans += freq[i];
                    u--;
                }
            }
            return ans;
        }
        return -1;
    }
};