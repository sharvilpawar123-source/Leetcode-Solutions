class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string ans;
        stack<char>st;
        unordered_map<string,string>m;
        for(int i=0;i<knowledge.size();i++) {
             m[knowledge[i][0]]=knowledge[i][1];
                }
        for(int i=0;i<s.length();i++) {
            st.push(s[i]);
        }
        while(!st.empty()) {
            if(st.top()==')') {
                st.pop();
                string key = "";
                 while(!st.empty()&&st.top()!='(') {
                    key+=st.top();
                    st.pop();
                }
                st.pop(); // removing'('
                reverse(key.begin(), key.end());
                string value = "?";
                if(m.find(key)!=m.end()){
                    value=m[key];
                }
                // repacing from back
                for(int i=0;i<value.length();i++) {
                    st.push(value[i]);
                }
            }
            else{
                ans+=st.top();
                st.pop();
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};