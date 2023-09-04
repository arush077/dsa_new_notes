//! make a LL with value=10

//WRONG
node * head;
head->val=10          

//CORRECT
node * head=new node (10);


//! NODILIZING CONCEPT
arr[n]={1,2,3}; make a LL out of it

// every arr[i] ko tum pointer ki tarah nahi dekh sakte
// pehle arr[i] ko nodilize karo 
//nodilize---->   node * newnode=new node(arr[i]);  matlab normal integer ko pointer banana
node * newnode=new node(arr[0]);
node *head=newnode,tail=newnode;
for(int i=1;i<n;i++){
    // arr[1] arr[2] arr[3] ye sabko nodilize kon karega
    node * newnode2=new node(arr[i]);
    tail->next=newnode2;
    tail=tail->next
}

tail->next=NULL;


//! IMP THING TO KEEP IN MIND WHILE WRITING LL ANSWERS
while accessing the "next"
keep in mind to make sure ki a->next   a!=NULL

so LL me bhi boundary cases likh lo
a->next and a->next->next exists in the code then
a==NULL and a->next==NULL ka boundary case likho