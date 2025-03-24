class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        if (meetings.empty()) return days;  // Edge case: No meetings

        sort(meetings.begin(), meetings.end()); // Sort meetings by start time
        int merged_days = 0, start = meetings[0][0], end = meetings[0][1];

        for (int i = 1; i < meetings.size(); i++) {
            if (meetings[i][0] <= end) {
                end = max(end, meetings[i][1]); // Merge overlapping intervals
            } else {
                merged_days += (end - start + 1); // Count merged meeting days
                start = meetings[i][0];
                end = meetings[i][1];
            }
        }
        merged_days += (end - start + 1); // Count last merged interval

        return days - merged_days; // Return available days
    }
};
