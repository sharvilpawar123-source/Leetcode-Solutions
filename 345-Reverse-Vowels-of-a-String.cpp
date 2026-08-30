class Solution {
public:
    bool isVowel(char ch) {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            return true;
        }
        return false;
    }

    string reverseVowels(string s) {
        int i = 0;
        int j = s.length() - 1;
        while (i <= j) {
            while (!isVowel(s[i]) && i <= j) {
                i++;
            }
            while (!isVowel(s[j]) && i <= j) {
                j--;
            }
            // condition check before swap inside while
            if (i <= j) {
                swap(s[i], s[j]);
            }
            i++;
            j--;
        }
        return s;
    }
};