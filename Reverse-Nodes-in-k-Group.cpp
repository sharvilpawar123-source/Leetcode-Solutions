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
13    ListNode* reverseKGroup(ListNode* head, int k) {
14
15        // check k size exist or not
16        int count = 0;
17        ListNode* temp = head;
18        while (count < k) {
19            if (temp == NULL) {
20                return head;
21            }
22
23            count++;
24            temp = temp->next;
25        }
26        // reverse other by recursive
27        ListNode* prevNode = reverseKGroup(temp, k);
28
29        //  reverse smal  problem or small group
30        count = 0;
31
32        temp = head;
33        while (count < k) {
34            ListNode* next = temp->next;
35            temp->next = prevNode;
36            prevNode = temp;
37            temp = next;
38            count++;
39        }
40        return prevNode;
41    }
42};