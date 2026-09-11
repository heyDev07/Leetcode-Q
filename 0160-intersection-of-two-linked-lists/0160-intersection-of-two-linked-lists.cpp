/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //if value matches then there is intersection 
        //if both becomes null at the same time without having same node in between then no intersection
        ListNode * first=headA;
        ListNode * second=headB;
        while(first!=second){
            first=first->next;
            second=second->next;
            if(first==second) return first;
            if(first==NULL ) first=headB;
            if(second==NULL) second=headA;
        }
        return first;
    }
};