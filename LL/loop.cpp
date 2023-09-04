       if(head==NULL || head->next==NULL || head->next->next==NULL){return false;}  //! 0 ya 1 ya 2 element me loop nahi hoga

        ListNode* slow=head;
        ListNode* fast=head->next;                                                   //! fast ko ek aage rakna slow ke

       

        while(slow!=fast){
            if(slow==NULL ||fast==NULL || fast->next==NULL){return false;}           //! fast->next->next so start of with fast!=NULL then fast->next!=NULL
            else{
            slow=slow->next;
            fast=fast->next->next;}
        }

        if(slow==fast){return true;}
        return false;