class Solution {
public:
    string RLE(string s) {
        string ans;

        char ch;
        for (int i = 0; i < s.length(); i++) {
            ch = s[i];
            int count = 0;
            while (s[i] == ch) {
                count++;
                i++;
            }
            ans += to_string(count);
            ans += ch;
            count == 0;
            i--;
        }
        return ans;
    }

    string countAndSay(int n) {
        string ans = "1";
        for (int i = 1; i < n; i++) {
            ans = RLE(ans);
        }
        return ans;
    }
};