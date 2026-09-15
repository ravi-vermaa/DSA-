
class Solution {
public:
    int palindrome(string s, int i, int j) {
        int count = 0;

        while(i >= 0 && j < s.length() && s[i] == s[j]) {
            count++;
            i--;
            j++;
        }

        return count;
    }

    int countSubstrings(string s) {
        int count = 0;

        for(int centre = 0; centre < s.length(); centre++) {

            // Odd-length palindromes
            int ans1 = palindrome(s, centre, centre);

            // Even-length palindromes
            int ans2 = palindrome(s, centre, centre + 1);

            count += ans1 + ans2;
        }

        return count;
    }
};
