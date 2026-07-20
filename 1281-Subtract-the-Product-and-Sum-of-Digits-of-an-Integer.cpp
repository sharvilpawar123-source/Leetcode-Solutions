class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1;
        int sum=0;
        while(n>0){
            int lastNum=n%10;
            sum+=lastNum;
            product*=lastNum;
            n=n/10;
        }
        return product-sum;
    }
};