//. Intersection of Two Linked Lists(each step mention)
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // first step ->>1
        // two linked list length count
        ListNode*curr = headA;
        int a=0;
        int b=0;
        while(curr!=NULL){
            a++;
            curr = curr->next;
            }
        curr = headB;
        while(curr!=NULL){
            b++;
            curr = curr->next;
        }
        // step ->>>>2 
        // two linked list diffenent 
        int diff = abs(a-b);
        // step ->>>>3 
        // diff ans big length linked list substraction
        if(a>b){
            while(diff!=0){
                headA = headA->next;
                diff--;
            }
        }
        else{
            while(diff!=0){
                headB=headB->next;
                diff--;
            }
        }
        // step ->>>>4 find intersection node 
        while(headA!=NULL && headB!=NULL){
            if(headA==headB){
                return headA;
            }
            headA= headA->next;
            headB = headB->next;
        } 
        return NULL;


