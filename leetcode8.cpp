//Palindrome Linked List
bool isPalindrome(ListNode* head) {
        ListNode* start = head;
        ListNode* last = head;
        while(start!=NULL && start->next!=NULL){
            start = start->next->next;
            last = last ->next;
        }
        // odd case
        if(start!=NULL && start->next==NULL){
            last = last->next;
        }
        // reverse in last half part
        ListNode* prev = NULL;
        while(last!=NULL && last->next!=NULL){
            ListNode* temp = last->next;
            last->next = prev;
            prev = last;
            last = temp;
        }
        // when last point in last position 
        if(last!=NULL){
            last->next = prev;
        }
        // cheak value
        ListNode* first = head;
        while(last!=NULL){
            if(first->val!=last->val){
                return false;
            }
            first=first->next;
            last=last->next;

        }
        return true;


        
    }