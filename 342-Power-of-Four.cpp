class Solution {
public:
    bool isPowerOfFour(int n) {

        // base case
        if(n==0)return false;
        while(n%4==0){
            n=n/4;
        }
        if(n==1){
            return true;
        }
        return false;

    }
};