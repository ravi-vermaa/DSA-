
class Solution {
public:

    long long nCr(int n, int r) {
        if (r > n) return 0;

        long long result = 1;

        for (int i = 1; i <= r; i++) {
            result = result * (n - i + 1) / i;
        }

        return result;
    }

    int climbStairs(int n) {
        long long count = 0;

        for (int r = 0; 2 * r <= n; r++) {
            int oneSteps = n - 2 * r;
            int totalMoves = oneSteps + r;

            count += nCr(totalMoves, r);
        }

        return count;
    }
};