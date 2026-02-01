1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    ListNode* detectCycle(ListNode* head) {
12
13        // cheack cycle exist or not
14        ListNode* slow = head;
15        ListNode* fast = head;
16        bool isExist = false;
17        while (fast != NULL && fast->next != NULL) {
18            slow = slow->next;
19            fast = fast->next->next;
20            if (slow == fast) {
21                isExist = true;
22                break;
23            }
24        }
25
26        // finding start of require cycle
27        if (!isExist) {
28            return NULL;
29        } else {
30            slow = head; // reinitialize slow
31
32            while (slow != fast) {
33                slow = slow->next;
34                fast = fast->next;
35            }
36        }
37        return slow;
38    }
39};