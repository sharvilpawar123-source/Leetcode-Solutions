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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        int n=0;
        while(temp!=NULL){
            temp=temp->next;
            n++;
        }
        // from first
       int i=1;
         temp=head;
        while(i!=k){
            temp=temp->next;
            i++;
        }
        // store it 
        ListNode* fromFirst=temp;
        // from end
        i=1;
        temp=head;
        while(i!=n-k+1){
            temp=temp->next;
            i++;
        }
        // store it 
        ListNode* fromLast=temp;

        // swap 
      int d=  fromFirst->val;
       fromFirst->val= fromLast->val;
        fromLast->val=d;

        return head;
    }
};