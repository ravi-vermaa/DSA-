class Solution {
public:
    string addBinary(string a, string b) {
        int n1 = a.length() - 1;
        int n2 = b.length() - 1;
        string sum = "";
        int carry = 0;

        while (n1 >= 0 || n2 >= 0 || carry) {
            int bit1 = (n1 >= 0) ? a[n1] - '0' : 0;
            int bit2 = (n2 >= 0) ? b[n2] - '0' : 0;

            int total = bit1 + bit2 + carry;

            sum += (total % 2) + '0';
            carry = total / 2;

            n1--;
            n2--;
        }

        reverse(sum.begin(), sum.end());
        return sum;
    }
};