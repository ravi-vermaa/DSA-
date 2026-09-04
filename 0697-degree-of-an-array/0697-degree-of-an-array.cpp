class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> freq;
        unordered_map<int, int> first;

        int degree = 0;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;

            if (first.find(nums[i]) == first.end()) {
                first[nums[i]] = i;
            }

            degree = max(degree, freq[nums[i]]);
        }

        int ans = nums.size();
        unordered_map<int, int> last;

        for (int i = 0; i < nums.size(); i++) {
            last[nums[i]] = i;
        }

        for (auto& [num, count] : freq) {
            if (count == degree) {
                int length = last[num] - first[num] + 1;
                ans = min(ans, length);
            }
        }

        return ans;
    }
};