class Solution {
public:
    int climbStairs(int n) {
        vector<int> vec(n + 1);

    // base case
    if(n==1 || n==2 )return n;


        vec[0] = 1;  // for n=0 result is 1 // actually not need of this
        vec[1] = 1;  // for n=1 result is 1
        vec[2] = 2;   // for n=2 result is 2
        for (int i = 3; i <=n; i++) {
            vec[i] = vec[i - 1] + vec[i - 2];
        }
        return vec[n];
    }
};