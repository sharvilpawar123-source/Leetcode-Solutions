# 6. Zigzag Conversion

### Difficulty: Medium

## Description
The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)


P   A   H   N
A P L S I I G
Y   I   R


And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:


string convert(string s, int numRows);


 
Example 1:


Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"


Example 2:


Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:
P     I    N
A   L S  I G
Y A   H R
P     I


Example 3:


Input: s = "A", numRows = 1
Output: "A"


 
Constraints:


	1 <= s.length <= 1000
	s consists of English letters (lower-case and upper-case), ',' and '.'.
	1 <= numRows <= 1000

## Submission Details
- **Status**: Accepted
- **Runtime**: 24
- **Memory**: 25440000
- **Language**: cpp

## Code
```cpp
class Solution {
public:
    string convert(string s, int numsRows) {
        string ans[numsRows];
        if (numsRows== 1||numsRows>=s.length())
            return s;
        ans[0]=ans[0]+s[0];
        int n=-1;
        int i=1;

        while (i!=s.length()) {
            if (n==-1 && i!=s.length()) {
                n=1;
                while (i!=s.length() && n<numsRows) {
                    ans[n]=ans[n]+s[i];
                    n++;
                    i++;
                }
            }
            else if(n==numsRows&& i!=s.length()) {
                n=numsRows-2;
                while (i!=s.length()&& n>=0) {
                    ans[n]=ans[n]+s[i];
                    n--;
                    i++;
                }
            }
            if(i==s.length())
                break;
        }
        s="";
        for(int i=0;i<numsRows;i++){
            s=s+ans[i];
        }
        return s;
    }
};
```
