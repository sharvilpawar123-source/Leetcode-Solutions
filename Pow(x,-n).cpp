1class Solution {
2public:
3    double myPow(double x, int n) {
4        
5        long binForm=n;
6        
7        if (binForm < 0) {
8            x = 1 / x;
9            binForm = -binForm;
10        }
11       
12        double ans=1;
13        while(binForm>0){
14            if(binForm % 2 == 1){
15                ans=ans*x;
16            }
17            x=x*x;
18            binForm=binForm/2;
19        }
20        return ans;
21
22    }
23};