//Linked List Cycle II
ListNode *detectCycle(ListNode *head) {
        // floyd cycle algo use 
        ListNode*first = head;
        ListNode * slow = head;
        while(first!=NULL && first->next!=NULL){
            first = first->next->next;
            slow = slow->next;
            if(slow==first){
                first = head;
                while(first!=slow){
                    first=first->next;
                    slow=slow->next;
                }
                return slow;
            }

        }
        return NULL;


        
    }