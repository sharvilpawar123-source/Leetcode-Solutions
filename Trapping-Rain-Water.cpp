1class Solution {
2public:
3    int trap(vector<int>& ht) {
4        int ans = 0;
5        int n = ht.size();
6        vector<int> lmax(ht.size(), 0);
7        vector<int> rmax(ht.size(), 0);
8        lmax[0] = ht[0];
9        rmax[n - 1] = ht[n - 1];
10
11        // for lmax vector
12        for (int i = 1; i < n; i++) {
13            lmax[i] = max(lmax[i - 1], ht[i]);
14        }
15        // for rmax vector
16        for (int i = n - 2; i >= 0; i--) {
17            rmax[i] = max(rmax[i + 1], ht[i]);
18        }
19        // for ans
20        for (int i = 0; i < n; i++) {
21            ans += min(lmax[i], rmax[i]) - ht[i];
22        }
23        return ans;
24    }
25};