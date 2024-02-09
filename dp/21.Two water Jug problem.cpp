You are at the side of a river. You are given a m litre jug and a n litre jug . Both the jugs are initially empty. The jugs dont have markings to allow measuring smaller quantities. You have to use the jugs to measure d litres of water . Determine the minimum no of operations to be performed to obtain d litres of water in one of the jugs.
The operations you can perform are:

Empty a Jug
Fill a Jug
Pour water from one jug to the other until one of the jugs is either empty or full.



//! concept: kitne minimum operations lagenge iss type ke qns ko u can solve by using dp

int f(int x,int y){


//x khali karo ya y khali karo 
int op1a=1+f(0,y);
int op1b=1+f(x,0);

int op1=min(op1a,op1b)


//fill karo
int op2a=
int op2b=
int op2=min(op2a,op2b)



//pour
int op3a=
int op3b=
int op2=min(op3a,op3b)





return min(op1,min(op2,op3));




}