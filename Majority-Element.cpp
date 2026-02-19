1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int n = nums.size();
5        int count = 0;
6        for (int i = 0; i < n; i++) {
7            for (int j = 0; j < n; j++) {
8                if (nums[i] == nums[j]) {
9                    count++;
10                }
11            }
12            if (count > (n / 2)) {
13                return nums[i];
14            }
15            else{
16                count=0;
17            }
18        }
19            return -1;
20    }
21};