1class Solution {
2public:
3    string removeOccurrences(string s, string part) {
4        while (s.length() > 0  && s.find(part)<s.length()) {
5            
6            s.erase(s.find(part), part.length());
7        }
8        return s;
9    }
10};