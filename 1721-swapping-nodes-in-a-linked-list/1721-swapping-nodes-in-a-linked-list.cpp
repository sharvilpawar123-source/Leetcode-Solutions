class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> p;
        ListNode* temp = head;
        while (temp!=NULL) {
            p.push_back(temp->val);
            temp = temp->next;
        }
        int i = k - 1;
        int j = p.size() - k;
        swap(p[i], p[j]);
        temp = head;
        int idx = 0;
        while (temp != NULL) {
            temp->val = p[idx];
            idx++;
            temp = temp->next;
        }
        return head;
    }
};