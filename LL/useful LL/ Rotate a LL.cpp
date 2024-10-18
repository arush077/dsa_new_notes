  ListNode* reverseList(ListNode* head) {

        if(head==NULL){return NULL;}                  //! boundary conditions as aage head->next and head->next->next are being accessed
        else if (head->next==NULL){return head;}
        


        ListNode* l=NULL;             
        ListNode* mid=head;
        ListNode* r=head->next;

       //! at every step u see lmr but actually pointer is only from m to r matlab
       //!       l   m --->r
       //!       l<--m    r          bas mr ko hatake ml me daalo
       //!           l    m   r      and then u move pointers 

       //! so isilie initially l = NULL bhi banaya to usko m se connect nahi kiya as lm me no connection should be there at any stages


        //!             1-->2-->3-->4-->5-->null
        //!      null<--1<--2<--3<--4<--5


        while(r!=NULL){
            mid->next=l;
            l=mid;                                  //!think ki left wale ka is already sorted
            mid=r;                                  //! so kaam bas MID par karna he mid->next=l
            r=r->next;                              //! l-->m-->r traversal so l=mid then mid=right then right=right->next always start from the source
        }

        mid->next=l;                   //! ye ek step miss hojata he last me            
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