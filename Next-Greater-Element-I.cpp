1class Solution {
2public:
3    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
4        // 1 finding next greater for nums2
5        unordered_map<int, int> m;
6        stack<int> s;
7
8        for (int i = nums2.size() - 1; i >= 0; i--) {
9            // for pop
10            while (s.size() > 0 && nums2[i] >= s.top()) {
11                s.pop();
12            }
13
14            if (s.empty()) {
15                m[nums2[i]] = -1;
16            } else {
17                m[nums2[i]] = s.top();
18            }
19            s.push(nums2[i]);
20        }
21        // 2 making require vector ans
22        vector<int> ans;
23        for (int i = 0; i < nums1.size(); i++) {
24            ans.push_back(m[nums1[i]]);
25        }
26        return ans;
27    }
28};