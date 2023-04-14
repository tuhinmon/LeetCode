// linked list insertion 
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int a=0,b=0;
        ListNode*curr=headA;
        while(curr!=NULL){
            a++;
            curr=curr->next;
        }
        curr = headB;
        while(curr!=NULL){
            b++;
            curr=curr->next;
        }
        int diff = abs(a-b);
        if(a>b){
            while(diff!=0){
                headA=headA->next;
                diff--;
            }
        }
        else{
            while(diff!=0){
                headB = headB->next;
                diff--;
            }
        }
        while(headA!=NULL && headB !=NULL){
            if(headA==headB){
                return headA;
            }
            headA=headA->next;
            headB = headB->next;
        }
        return NULL;