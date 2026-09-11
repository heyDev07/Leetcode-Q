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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * first=list1;
        ListNode * second=list2;
        ListNode * temp=new ListNode(-1);
        ListNode  * head=temp;
        if(list1==NULL) return list2;
            if(list2==NULL) return list1;
        while(first && second){
                if(first->val<second->val){
                    temp->next=first;
                    temp=temp->next;
                    first=first->next;
                }
                else{
                        temp->next=second;
                         temp=temp->next;
                        second=second->next;
                }
        }
      if(first!=NULL)
            {
                temp->next=first;
            }
      if(second!=NULL)
            {
                temp->next=second;
            }
        return head->next;
    }
};