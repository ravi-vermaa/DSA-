
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> degree(n + 1, 0);

        for (auto& t : trust) {
            degree[t[0]]--;  // Person trusts someone
            degree[t[1]]++;  // Person is trusted
        }

        for (int i = 1; i <= n; i++) {
            if (degree[i] == n - 1) {
                return i;
            }
        }

        return -1;
    }
};
