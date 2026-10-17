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