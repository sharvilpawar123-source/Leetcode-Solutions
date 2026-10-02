class Solution {
public:
    int dayOfYear(string date) {
        int year=stoi(date.substr(0,4));
        int month=stoi(date.substr(5,2));
        int day=stoi(date.substr(8,2));
        int ans=day;

    for(int i=1;i<month;i++){
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
             ans+=31;
        }
        else if(i==4||i==6||i==9||i==11){
          ans+=30;
        }
        else if(i==2){
          if(year%400==0||(year%4==0 && year%100!=0)){
           ans+=29;
            }
      else{
        ans+=28;
            }
    }
    }
return ans;
    }
};