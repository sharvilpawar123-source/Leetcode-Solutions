1class Solution {
2public:
3    bool isAlphaNumeric(char ch) {
4        if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
5            return true;
6        }
7        return false;
8    }
9
10    bool isPalindrome(string s) {
11        int st = 0;
12        int end = s.length() - 1;
13        while (st <= end) {
14            if (!isAlphaNumeric(s[st])) {
15                st++;
16                continue;
17            }
18            if (!isAlphaNumeric(s[end])){
19                end--;
20            continue;
21        }
22            if (tolower(s[st]) != tolower(s[end])){
23                return false;
24            }
25         
26            st++;
27            end--;
28        }
29        return true;
30    }
31};