class Solution {
public:
    int helperDP(int n, vector<int>& f) {
        if (n <= 2) {
            return n;
        }
        if (f[n] != -1) {
            return f[n];
        }
        return f[n] = helperDP(n - 1, f) + helperDP(n - 2, f);
    }

    int climbStairs(int n) {
        vector<int> vec(n + 1, -1);
        return helperDP(n, vec);
    }
};