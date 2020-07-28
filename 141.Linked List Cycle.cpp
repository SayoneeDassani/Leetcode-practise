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
    bool hasCycle(ListNode *head) {
        unordered_set <ListNode *> s;
        
        if(head==NULL||head->next==NULL)
            return false;
        
        while(head!=NULL)
        {    
            if(s.find(head)==s.end())
                
            {s.insert(head);}
            
            else
            { 
                return true;
            }
            
            head=head->next;
            
        }
         return false;
    }
};
