class Solution {
public:
    long long calculateScore(vector<string>& instructions,
                             vector<int>& values) {
        long long score = 0;
        int i = 0, n = values.size();
        while (i >= 0 && i < n) {
            if (instructions[i] == "-1")
                return score;
            if (instructions[i] == "add") {
                score += values[i];
                instructions[i++] = "-1";
            } else {
                instructions[i] = "-1";
                i = i + values[i];
            }
        }
        return score;
    }
};