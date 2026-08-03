/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return;

        stack<ListNode*> st;

        ListNode* temp=head;
        int n=0;

        while(temp){
            st.push(temp);
            temp=temp->next;
            n++;
        }

        temp=head;

        for(int i=0;i<n/2;i++){
            ListNode* last=st.top();
            st.pop();

            last->next=temp->next;
            temp->next=last;
            temp=last->next;
        }

        temp->next=NULL;
    }
};