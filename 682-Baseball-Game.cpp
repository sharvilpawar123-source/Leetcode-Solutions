class Solution {
public:
    int calPoints(vector<string>& operations) {
        int ans = 0;
        stack<int> s;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "+") {
                int x;
                int top = s.top();
                s.pop();
                int secTop = s.top();
                x = top + secTop;
                s.push(top);
                s.push(x);
            }

            else if (operations[i] == "C") {
                s.pop();
            } else if (operations[i] == "D") {
                int newScore = 2 * s.top();
                s.push(newScore);
            } else {
                s.push(stoi(operations[i]));//it convert string to int directly 
            }
        }

        while (!s.empty()) {
            ans += s.top();
            s.pop();
        }

        return ans;
    }
};