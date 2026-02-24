1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> st;
5        for (int i = 0; i < s.size(); i++) {
6            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
7                st.push(s[i]);
8            } else {
9                // if closing are more
10                if (st.empty()) {
11                    return false;
12                }
13
14                if ((s[i] == ')' && st.top() == '(') ||
15                    (s[i] == ']' && st.top() == '[') ||
16                    (s[i] == '}' && st.top() == '{')) {
17
18                    st.pop();
19                } else { // if it not matches
20                    return false;
21                }
22            }
23        }
24        // if opening are more
25        return st.size() == 0;
26    }
27};