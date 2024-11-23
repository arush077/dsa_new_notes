DNF(Dutch National Flag)  --- O(N)

qn : https://leetcode.com/problems/sort-colors/

sort an array which only has 0,1,2


https://www.youtube.com/watch?v=lyUnxmwvxR4


//1.this is how it starts 

  ij              k
[ 1 , 2 , 3 , 4 , 5 ]

//2.

//sirf j ko dekho 
// op1 = if j pe 1 he to, we got it, move j ahead
// op2 = if j pe 0 he, we dont want this, we want a 0 at i, so swap j and i and move i ahead, and j also
// op3 = if j pe 2 he, we dont want this, we want a 2 at k, so swap j with k and move k behind, but dont move j ahead as swap hoke j pe kya aaya he we dont know



//op1 j==1 j++
//op2 j==0 swap(i,j) i++,j++
//op3 j==2 swap(k,j) k--