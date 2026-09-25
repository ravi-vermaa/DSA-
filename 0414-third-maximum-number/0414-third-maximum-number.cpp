class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long maxi = LLONG_MIN;
        long long max2 = LLONG_MIN;
        long long max3 = LLONG_MIN;

        for (int x : nums) {
            if (x == maxi || x == max2 || x == max3)
                continue;

            if (x > maxi) {
                max3 = max2;
                max2 = maxi;
                maxi = x;
            }
            else if (x > max2) {
                max3 = max2;
                max2 = x;
            }
            else if (x > max3) {
                max3 = x;
            }
        }
        if (max3 == LLONG_MIN)
            return maxi;

        return max3;
    }
};