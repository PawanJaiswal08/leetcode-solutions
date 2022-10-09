class Solution {
public:
    void reverse(ListNode *start, ListNode *end)
    {
        ListNode *prev = NULL;
        ListNode *curr = start;
        ListNode *nexty = start->next;
        
        while(prev!=end)
        {
            curr->next = prev;
            prev = curr;
            curr = nexty;
            
            if(nexty!=NULL)
            {
                nexty = nexty->next;
            }
        }
        
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head==NULL || head->next == NULL || k==1)
            return head;
        
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *beforeStart = dummy, *end = head;
        int i=0;
        while(end!=NULL)
        {
            i++;
            if(i%k==0)
            {
                //reversal
                ListNode *start = beforeStart->next, *temp = end->next;
                reverse(start,end);
                beforeStart->next = end;
                start->next = temp;
                beforeStart = start;
                end = temp;
            }
            else
            {
                end = end->next;
            }
            
        }
        return dummy->next;
    }
};
