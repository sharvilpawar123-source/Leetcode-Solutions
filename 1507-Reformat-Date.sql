class Solution {
public:
    string reformatDate(string date) {
        string ans;
        vector<string>str={"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        string str1=date.substr(date.length()-4,4);
        ans+=str1;
        ans+='-';
        string str2=date.substr(date.find(' ')+1,3);
        int ch=0;
        for(int i=0;i<12;i++){
            if(str[i]==str2){
                ch=i+1;
                break;
            }
        }
        if(ch<10)ans+='0';
        ans+=to_string(ch);
        ans+='-';
        int i=0;
        string temp;
        while(date[i]!=' '){
            temp+=date[i];
            i++;
        }
        if(temp.length()==1)ans+='0';
        temp=temp.substr(0,temp.length()-2);
        if(temp.length()==1) ans+='0';
        ans+=temp;
    return ans;
    }
};