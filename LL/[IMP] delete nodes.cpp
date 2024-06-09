https://leetcode.com/problems/remove-linked-list-elements/description/


//! again baggage pichla nodes ka concept lagega yaha par bhi


        //again u used the concept of piche ek temporary node jod do original LL ke 
        //because tumhe piche and curr ye dono vectors maintain karne he so
        //first element pe "curr" fix karna he to "piche" kaha fix karoge 
        //isilie ek dummy node banao taaki piche and curr dono fix ho paae and first element ko curr de paao




        ListNode* piche = new ListNode (0);
        piche->next=head;

        ListNode *  temp_head_back=piche;

        ListNode * curr=head;


        while(curr!=NULL && piche!=NULL){
            if(curr->val==val){
                piche->next=curr->next;
                curr->next=NULL;
                curr=piche->next;
            }

            else{
                piche=piche->next;
                curr=curr->next;
            }

        }


        return temp_head_back->next;

