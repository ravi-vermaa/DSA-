
class Solution {
public:
    int i = 0;

    int calculate(string s) {
        return solve(s);
    }

    long long solve(string &s) {
        long long result = 0;
        long long number = 0;
        int sign = 1;

        while (i < s.size()) {
            char ch = s[i];

            if (isdigit(ch)) {
                number = number * 10 + (ch - '0');
            }

            else if (ch == '+') {
                result += sign * number;
                number = 0;
                sign = 1;
            }

            else if (ch == '-') {
                result += sign * number;
                number = 0;
                sign = -1;
            }

            else if (ch == '(') {
                i++;
                number = solve(s);
            }

            else if (ch == ')') {
                result += sign * number;
                return result;
            }

            i++;
        }

        result += sign * number;
        return result;
    }
};
