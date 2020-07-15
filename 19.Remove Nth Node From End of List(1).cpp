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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head== NULL||head->next== NULL)  return NULL;
        ListNode* p1=head, * p2=head;
        for(int i=0;i<n&& p2!=NULL;i++) p2=p2->next;
        if(p2==NULL) return p1->next;
        while(p2->next!=NULL)
        {
            p1=p1->next;
             p2=p2->next;
        }
        p1->next=p1->next->next;
        return head;
    }
};
