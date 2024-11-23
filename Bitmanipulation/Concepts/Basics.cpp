//!Bitwise operations BC

//! ^ is the exor operator in c++ dont confuse this with power operation of math


//1.check odd or even
x&1 = 0 for even
x&1 = 1 for odd  


even x%2==0
odd  x%2!=0
instead just check lsb in binary representation

odd no =lsb =1 in binary rep
even no =lsb=0

so do x&1 matlab 9&1 === 1001 & 0001 = 0001 =1

x&1 = 0 for even
x&1 = 1 for odd  

just remember ki ye 1 actual 1 nahi hota but 00000....001 hota he

this is much faster than %2

------------------------------------------------
//2.check if x is power of 2
x & (x-1) = 0  

only wont work for x=0


------------------------------------------------
//3. Playing with the kth bit (right se) in x //! BIT MASKING !!!!
 x & (1<<k)   == 0 or >0 yahi do cases he dhyaan rakna ya to 0 ya to greater than 0

 //! ye bohot imp point to note he ki 
 //! 0 ya to +ve dega ye
 //! bit set he to +ve value dega and bit unset he to fir 0 dega



 x=100100111000
     k<---2 1 0

kth bit from the right dekre he 
int no=000000100000
            kth
just take and with this no

x&1000000 = to check if kth bit was 1 or not
x&10 = just to check if 2nd bit from end is 0 or not
x&1 = just to check if last bit is one or not

so it is x ^ (1<<k) as 1<<k == 2^k 
and 1<<k generates 100000 and 1 at kth posn


*check if kth bit is set : x & (1<<k)
*toggle kth bit (exor with 1 toggles bit) : x ^ (1<<k)
*set kth bit : x | (1<<k)
*unset kth bit : x & (1<<k)

-------------------------------------------------
//4.multiply or divide a no by 2^k
multiply = x<<k
divide   = x>>k


10>>1 or 10/2

10 = 1010 
10>>1 matlab right shift by 1 element right shift me right se kaato 1 element
1010 = 10 
101  = rightshift by 1

10/2=5


5<<1 = 5*2
5<<1 matlab right me hi ab kato mat balki zeroes add karo to yaha ek zero add kar
101  =5
1010 =left shift by 1

1010 = 10 
5*2=10



---------------------------------------------------
//5. no of ones in binary representation of n 

int count = 0;
while(n!=0){
    n = n & (n-1);
    count++
}
return count;

--------------------------------

//*. x is divisible by 2 = x & 1

//*. x is a power of 2   = x & ( x-1 )

// rightmost set bit = x & -x

// XOR with 1 and 0 = exor with 0 doesnt change the no, exor with 1 makes the complement. (XOR is used in the qn jaha pe all elements occur 2 times but one element occurs only once)