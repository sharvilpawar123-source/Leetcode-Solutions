class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        // here we traverse only first string and check for other string if they
        // are same with first string
        for (int i = 0; i < strs[0].size(); i++) {
            char ch = strs[0][i];

            for (int j = 1; j < strs.size(); j++) {
                if (i >= strs[j].size() || strs[j][i] != ch)
                    return ans;
            }

            ans += ch;
        }

        return ans;
    }
};