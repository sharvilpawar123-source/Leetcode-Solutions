1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    int getDecimalValue(ListNode* head) {
14        vector<int> nums;
15        ListNode* temp = head;
16        while (temp != NULL) {
17            nums.push_back(temp->val);
18            temp=temp->next;
19        }
20
21        // calc ans
22        int pow = 1;
23        int ans = 0;
24        int size = nums.size();
25        for (int i = size - 1; i >= 0; i--) {
26            ans += nums[i] * pow;
27            pow = pow * 2;
28        }
29        return ans;
30    }
31};