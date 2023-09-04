https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-nodes-in-a-linked-list5035/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

node * curr=head;
while(curr!=NULL){
    if(curr->val%2==0){
        //even node he
        if(evenhead==NULL){
            evenhead=curr;                 //! evenhead pehli baar assign hora
            eventail=curr;
            }
        else{
            eventail->next=curr;
            eventail=eventail->next;      //! even head already assign ho chuka he so sirf tail me elements ko jodo
        }
    }

    else if(curr->val%2!=0){
        //even node he
        if(oddhead==NULL){
            oddhead=curr;
            oddtail=curr;
            }
        else{
            oddtail->next=curr;
            oddtail->next=oddtail;
            }
    }

    curr=curr->next;
}


//connect the even wala chain and odd wala chain
