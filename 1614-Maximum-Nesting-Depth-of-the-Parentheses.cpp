class Solution {
public:
    int maxDepth(string s) {
        int maxAns=0;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                ans++;
                maxAns=max(ans,maxAns);
            }
            else if(s[i]==')'){
                ans--;
            }
        }
        return maxAns;
    }
};