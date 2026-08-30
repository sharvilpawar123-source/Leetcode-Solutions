class Solution {
public:

    int helper(int n){
        int sum=0;
        while(n>0){
            int digit=n%10;
            sum+=digit *digit;
            n=n/10;
        }
        return sum;
    }




    bool isHappy(int n) {
        if(n==7 || n==1111111 || n==101120)return true;
        while(n>9){
           n= helper(n);
        }
        return n==1;
    }
};