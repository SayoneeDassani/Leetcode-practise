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
    ListNode* reverseList(ListNode* head , ListNode *last){
           ListNode* newHead= new ListNode(0);
        while(head!=last)
        {ListNode* temp=head->next;
         head->next=newHead->next;
         newHead->next=head;
         head=temp;
            
        }
        return newHead->next;
           
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        auto curr=head;
        for(int i=0;i<k;i++,curr=curr->next)
        {
            if(!curr) return head;
            
        }
        auto newHead=reverseList(head,curr);
        head->next=reverseKGroup(curr,k); 
        return newHead;
    }
};
