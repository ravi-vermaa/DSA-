class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for (string op : operations) {
            if (op == "C") {
                st.pop();
            }
            else if (op == "D") {
                st.push(2 * st.top());
            }
            else if (op == "+") {
                int last = st.top();
                st.pop();

                int secondLast = st.top();

                st.push(last);
                st.push(last + secondLast);
            }
            else {
                st.push(stoi(op));
            }
        }

        int ans = 0;

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};