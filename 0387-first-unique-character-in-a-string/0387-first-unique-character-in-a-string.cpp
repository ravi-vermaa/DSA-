class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26] = {0};
        
        // Pass 1: Count occurrences of each character
        for (char c : s) {
            freq[c - 'a']++;
        }
        
        // Pass 2: Find the first character with frequency 1
        for (int i = 0; i < s.length(); i++) {
            if (freq[s[i] - 'a'] == 1) {
                return i;
            }
        }
        
        return -1;
    }
};