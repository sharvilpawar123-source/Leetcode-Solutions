class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<int>s;
        string ans;
        int i=0;

            while(i<word.length() && word[i]!=ch){
                s.push(word[i]);
                i++;
            }
            if(i==word.length())return word;
            ans+=ch;
            while(!s.empty()){
                ans+=s.top();
                s.pop();
            }
            for(int j=i+1;j<word.length();j++){
                ans+=word[j];
            }
            return ans;
        }
    
};