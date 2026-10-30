class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int c=1;
        bool isZero=false;
        for(int i=1;i<s.length();i++){
            if(s[i]=='('){
                c++;
                if(isZero){
                    isZero=false;
                    continue;
                }
                ans+=s[i];
            }
            else{
                c--;
                if(c==0){
                    isZero=true;
                    continue;
                }
                ans+=s[i];
            }

        }
        return ans;
    }
};