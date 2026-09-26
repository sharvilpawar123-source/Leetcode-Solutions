class Solution {
public:
    int arrangeCoins(int n) {
     int x=1;
        while(n!=0){
            n=n-x;
            if(n<0){
                return x-1;
            }
            x++;
        }
        return x-1;
    }
};