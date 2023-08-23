class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
         const int sum_a = reduce(begin(A), end(A));
        const int sum_b = reduce(begin(B), end(B));
        // assert((sum_a - sum_b) % 2 == 0);
        const int diff = (sum_a - sum_b) / 2;
        for (int a : A)
            for (int b : B)
                if (a - b == diff) return {a, b};
        
        // Unreachable, as the problem is guaranteed to have a solution.
        assert(false);
        return {-1, -1};
    }
};