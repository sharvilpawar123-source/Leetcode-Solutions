1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        int n = nums.size();
5        vector<int> ans;
6        map<int, int> m;
7        for (int i = 0; i < n; i++) {
8            int first = nums[i];
9            int second = target - nums[i];
10            if (m.find(second) != m.end()) {
11                ans.push_back(m[second]);
12                ans.push_back(i);
13            }
14            m[first] = i;
15        }
16        return ans;
17    }
18};