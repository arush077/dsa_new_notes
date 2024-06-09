https://leetcode.com/problems/swap-nodes-in-pairs/



//! use baggae pichla node ka concept




class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        //actual method to do this kind of qn  without using extra array or extra space
        //1->2->3->4->5
                i  j

             i->next=j->next && j->next=i
        //1->2  4->3->5
        //   |     ^
        //   |_____|
        //so islie previous ko bhi sambhalna padega 
        //islie ek previous pointer bhi chahiye hoga i aur j ke sath 
        //agar prev ko hold karke rakte to prev(2)->next = j(4) kar sakte the simply
        

        //also remember ki prev rakne ke lie jab i aur j
        //1->2->3->4->5
          i  j
        
        //ab kya previous so start me khudka previous banana hoga
        //Node * prev=new Node(0)
        //prev->next=i
        // 0->1->2->3->4->5
        // pr i  j
        //ab start karo iterations


        if(head==NULL){return NULL;}
        else if(head->next==NULL){return head;}

         ListNode * prev = new ListNode(0)  ;
         ListNode * head_temp=prev;

        ListNode * curr=head;
        ListNode * nextn=curr->next;


        while(nextn!=NULL ){
            curr->next=nextn->next;
            nextn->next=curr;
            prev->next=nextn;


            if(curr->next==NULL){break;}

            prev=curr;
            curr=curr->next;
            nextn=curr->next;
        }


        return head_temp->next;


    }
};