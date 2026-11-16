class Solution {
public:
    string digitSum(string s, int k) {
        while(s.length()>k){
        string ans="";
        for(int i=0;i<s.length();i+=k){
            string str=s.substr(i,k);
            int temp=0;
            for(char ch:str){
                temp+=ch-'0';
            }
            ans+=to_string(temp);
        }
        s=ans;
    }
    return s;
    }
};


