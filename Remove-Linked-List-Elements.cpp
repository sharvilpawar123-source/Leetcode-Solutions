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
13    ListNode* removeElements(ListNode* head, int val) {
14
15        // base case
16        if (head == NULL)
17            return NULL;
18
19        ListNode* curr = head;
20        ListNode* Cnext = head->next;
21
22        while (curr != NULL && Cnext != NULL) {
23            if (Cnext->val == val) {
24
25                curr->next = Cnext->next;
26                Cnext->next = NULL;
27                Cnext = curr->next;
28
29            } else {
30                curr = curr->next;
31                Cnext = Cnext->next;
32            }
33        }
34        if (head->val == val)
35            return head->next;
36        return head;
37    }
38};