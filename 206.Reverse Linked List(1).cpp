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
    ListNode* reverseList(ListNode* head) {
           ListNode* newHead= new ListNode(0);
        while(head!=NULL)
        {ListNode* temp=head->next;
         head->next=newHead->next;
         newHead->next=head;
         head=temp;
            
        }
        return newHead->next;
    
        
    }
};
