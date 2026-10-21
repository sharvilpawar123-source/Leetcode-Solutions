class Solution {
public:
    int minOperations(string s) {
        bool isSorted=true;
        for(int i=1;i<s.length();i++){
            if(s[i]<s[i-1]){
                isSorted=false;
                break;
            }

        }
        if(isSorted)return 0;
        if(s.length()==2)return -1;
        char min=*min_element(s.begin(),s.end());
        char max=*max_element(s.begin(),s.end());
        if(min==s[0]||max==s[s.length()-1])return 1;
        for(int i=1;i<s.length()-1;i++){
            if(s[i]==min|| s[i]==max){
                return 2;
            }
        }
        return 3;

    }
};