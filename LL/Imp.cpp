//! make a LL with value=10

//WRONG
node * head;
head->val=10          

//CORRECT
node * head=new node (10);


//! NODILIZING CONCEPT
arr[n]={1,2,3}; make a LL out of it

//  og node and nn ... og node banta he for loop ke bahar and nn banta he for loop ke andar and then og->next=nn and og=og->next and last me head->next answer dena

og node (value=0) 
for()
{
    nn=                              //nn define karna
    og->next=nn;                     //og->next=nn
    og=og->next;                     //og ko aage badhana
}


Node *og=new Node(0);
Node* head=og;          //ek head ka copy banake rakna
for(int i=0;i<v.size();i++){
    Node* nn=new Node(arr[0]);
    og->next=nn;
    og=og->next;
}

return og->next






//! IMP THING TO KEEP IN MIND WHILE WRITING LL ANSWERS
while accessing the "next"
keep in mind to make sure ki a->next   a!=NULL

so LL me bhi boundary cases likh lo
a->next and a->next->next exists in the code then
a==NULL and a->next==NULL ka boundary case likho iska order ese hi rakna chote se bada pehle a!=NULL fir a->next!=NULL