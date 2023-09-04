  ListNode* reverseList(ListNode* head) {

        if(head==NULL){return NULL;}                  //! boundary conditions as aage head->next and head->next->next are being accessed
        else if (head->next==NULL){return head;}
        


        ListNode* l=head;             
        ListNode* mid=head->next;
        ListNode* r=head->next->next;
        l->next=NULL;                              //! alag se because loop ke andar we are assuming ki left wala node is already sorted

        while(r!=NULL){
            mid->next=l;
            l=mid;                                  //!think ki left wale ka is already sorted
            mid=r;                                  //! so kaam bas MID par karna he mid->next=l
            r=r->next;                              //! l-->m-->r traversal so l=mid then mid=right then right=right->next always start from the source
        }

        mid->next=l;                                
        return mid;


    }




    //! RECURSION

    rev(node * p)
    if(p->next==NULL){
        head=p;
        return ;
    }

    rev(p->next);               //see drawio

    node * q=p->next;
    q->next=p;
    p->next=NULL;