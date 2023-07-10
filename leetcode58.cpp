//Remove Nth Node From End of List
ListNode* removeNthFromEnd(ListNode* head, int n) {
        // approach ->>>>>>1


        // ListNode*curr = head;
        // int count =0;
        // while(curr!=NULL){
        //     count++;
        //     curr=curr->next;

        // }
        // if(count==n){
        //     return head->next;
        // }
        // curr=head;
        // int diff = (count-n-1);
        // while(diff!=0){
        //     curr = curr->next;
        //     diff--;
        // }
        // curr->next=curr->next->next;
        // return head;


        //approach->>>>>2





       // use two pointer approach 
        // first step ->>>1
        ListNode*first = head;
        ListNode*slow = head;
        while(n--){
            first = first->next;
        }
        if(first==NULL){
            return head->next;
        }
        while(first->next!=NULL){
            first=first->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;



        
    }