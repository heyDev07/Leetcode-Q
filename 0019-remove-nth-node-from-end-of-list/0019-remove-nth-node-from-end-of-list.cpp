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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       //count no. of nodes
       ListNode * temp=head;
       int count=0;
       while(temp){
        temp=temp->next;
        count++;
       }
      temp=head;
       int remove=count-n-1;
       if(count==n) return head->next;
       while(remove){
        temp=temp->next;
        remove--;
       }
       temp->next=temp->next->next;
       return head;
    }
};