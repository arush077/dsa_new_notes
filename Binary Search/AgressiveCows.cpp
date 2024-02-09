Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located along a straight line at positions x1 ... xN (0 <= xi <= 1,000,000,000).

His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall.
To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, such that the 
minimum distance between any two of them is as large as possible.
 What is the largest minimum distance?
Input
the number of test cases, then t test cases follows.
 Line 1: Two space-separated integers: N and C
 Lines 2..N+1: Line i+1 contains an integer stall location, xi
Output
For each test case output one integer: the largest minimum distance.
Example
Input:

1
5 3
1
2
8
4
9
Output:

3
Output details:

FJ can put his 3 cows in the stalls at positions 1, 4 and 8,
resulting in a minimum distance of 3.

------------------------------------------------------------------------------------------------------


CONCEPT:

max(min(distance)) karne bolra he 

N=3
  [ 1 , 2 , 4 , 8 , 9 ]
    c1  c2  c3           =(2-1,4-2) max(min) = 1
------------------------
    c1  c2      c3       =(2-1,8-2) max(min) = 1


min jo bhi aati he usko maximize karna he 
use binary search
search space nikalo pehle to 


lets say 2 cow hote 
[1,2,4,8,9]
c1       c2   maximum ans=9-1=8 or max - min

lets say jitne sheds utne cows
[1,2, 4, 8, 9]
c1 c2 c3 c4 c5     to min ans aata =9-8=1 (sort karke min difference btw the adj elements se milega)



so lets say for 2 cows:

Search Space which will be same for any amount of cows
1-------------------------8
i                         j

mid=4.5=4 
max(min)==>so in actuallity u are seeing the minimum value of distance

IMP QN TO KEEP AKSING
can min distance be 4 between 2 cows so that no cows fight?


int cow=1 dekte he kitne cow fit kar sakte he so initially 0 cows
[1,2,4,8,9]
 i        
 j             1-1<mid(4)
   j           2-1<mid(4)
     j         4-1<mid(4)
       j       8-1>mid(4) cow++ ,cow=2, i=j, i bhi reintiallize hoga ab as ek cow beth gaya he yaha par bhi(one on 1 and other on 8 so 2 cows)
       i
       j       8-8<mid(4)
         j     9-8<mid(4)


so if(cows>=required_no_of_cows){
    //then you can do more searching and 
    //max(min) ==> so try to maximize the mid(4)
    //and in the process keep storing value of mid so that u dont lose out on it and at the end you get the best mid
    //s=mid+1 as you are trying to maximize it 
}

else if (cows<required_no_of_cows){

//so distance choti karni hogi to atleast cross the required no of cows
//e=mid-1 karoge to left half me ans ayegi and it would be smaller
jese hi distance between 2 cows choti karoge cows will cross the threshold value and then try to maximize after it
    



}