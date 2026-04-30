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
13    ListNode* rotateRight(ListNode* head, int k) {
14
15        if (!head || !head->next || k == 0)
16            return head;
17
18        // find length
19        int len = 0;
20        ListNode* t = head;
21        while (t != NULL) {
22            len++;
23            t = t->next;
24        }
25
26        k = k % len;  //IMP Because rotating a linked list length (len) times = no change
27        for (int i = 0; i < k; i++) {
28
29            ListNode* temp = head;
30            ListNode* tempPrev = NULL;
31
32            while (temp->next != NULL) {
33                tempPrev = temp;
34                temp = temp->next;
35            }
36
37            temp->next = head;
38            tempPrev->next = NULL;
39            head = temp;
40        }
41
42        return head;
43    }
44};