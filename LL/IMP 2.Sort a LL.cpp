    https://leetcode.com/problems/sort-list/
    
    
//! IMP here we are using merge sort to sort the linked list(iske bina bhi ho jaega by storing the value in the vectors) but merge sort se karoge to extra space nahi lagega

//! merge sort ke lie mid chahiye hota he and ye mid nikalna in LL ka tarika he using fast slow pointer jab fast bahar nikal jaega tab jaha slow hoga wo mid bol denge
//!
// mergesort(){
//     base case 
//     mid
//     left nikalo
//     right nikalo
//     mergesort(left);
//     mergesort(right);
//     mergesort(left,right)
// }




    ListNode* mid(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL && fast->next!=NULL && slow!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }


  ListNode* merge2sorted(ListNode* first, ListNode* second)
    {
        ListNode* answer = NULL; // define answer to null
        
        if(first == NULL) // if first is null, then what to merge...nothing
        {
            return second; // return second
        }
        
        if(second == NULL) // if second is null, then what to merge...nothing
        {
            return first; // return first
        }
        
        // if value of first is less than value of second,then give answer to first
        if(first -> val <= second -> val) 
        {
            answer = first;
            answer -> next = merge2sorted(first -> next, second); // and again call merge for answer's next
        }
        else // else give answer to second
        {
            answer = second;
            answer -> next = merge2sorted(first, second -> next); // and again call merge for answer's next
        }
        
        return answer; // finally return answer
    }



ListNode* mergesort(ListNode* head){
if(head==NULL){return NULL;}
if(head->next==NULL){return head; }
ListNode* midl=mid(head);

ListNode* left= head;
ListNode* right= midl->next;
midl->next=NULL;
left=mergesort(left);
right=mergesort(right);

return merge2sorted(left,right);

}









    ListNode* sortList(ListNode* head) {
        if(head==NULL){return NULL;}
        else if(head->next==NULL){return head;}
        // ListNode* temp=head;
        // vector<int> v;
        // while(temp!=NULL){
        //     v.push_back(temp->val);
        //     temp=temp->next;
        // }

        // sort(v.begin(),v.end());
        // ListNode* newnode= new ListNode(v[0]);
        // head=newnode;
        // for(int i=1;i<v.size();i++){
        //     ListNode* nextnewnode= new ListNode(v[i]);
        //     newnode->next=nextnewnode;
        //     newnode=newnode->next;
        // }

        return mergesort(head);}