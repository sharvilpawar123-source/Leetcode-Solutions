class Solution {
public:
    int gcdCalculate(int &x, int &y) {
        int ans;
        while (x > 0 && y > 0) {
            if (x >= y) {
                x = x % y;
            } else {
                y = y % x;
            }
        }
    if(x==0){
        ans=y;
    }
    else{
        ans=x;
    }
    return ans;


    }

    int gcdOfOddEvenSums(int n) {
        int even=0;
        int odd=0;
        for (int i = 1; i <= n * 2; i++) {
            if (i % 2 == 0) {
                even += i;
            } else {
                odd += i;
            }
        }
        return gcdCalculate(even, odd);
    }
};