3 pointer with a dummy node concept


when you want to maintain a l m r pointers 
jese maanlo u need to compare the adjacent nodes 
so you need 3 pointer for this also using a dummmy node makes it easier


        1-->2-->3-->4-->5-->N
    
    0-->1-->2-->3-->4-->5-->N
    l   m   r



    so while(r!=NULL){
        ....do the calculations
    }


    -------------------------------------------------------------
    making a new LL using dummy node

      ListNode* dummy = new ListNode(0);        //making dummy node
      ListNode* dummy2 = dummy;                 //holding dummy node in dummy2

        for(int i=0;i<temp.size();i++){
            ListNode* nn = new ListNode(temp[i]);
            dummy->next = nn;
            dummy = dummy->next;
        }

       return dummy2->next;                     //returning dummy2->next always and not dummy->next as dummy has reached the last element due to the while loop