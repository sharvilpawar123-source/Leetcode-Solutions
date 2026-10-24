class Solution {
public:

int helper(string date){
    int days[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m=stoi(date.substr(0,2));
    int d=stoi(date.substr(3,2));
for(int i=0;i<m-1;i++){
    d+=days[i];
}
return d;
}


    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {

        int arrival=max(helper(arriveAlice),helper(arriveBob));
        int departure=min(helper(leaveAlice),helper(leaveBob));
return max(0,(departure-arrival+1));
    }
};