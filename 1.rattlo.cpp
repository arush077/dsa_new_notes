If n ≤ 12, the time complexity can be O(n!).
If n ≤ 25, the time complexity can be O(2^n).   n=100 pe bhi 2^n chal jaega as 2^100==(2^10)(2^10)==(1024)(1024)==10^3 * 10^3 == 10^6
If n ≤ 100, the time complexity can be O(n4).
If n ≤ 500, the time complexity can be O(n3).
If n ≤ 10^4, the time complexity can be O(n2).
If n ≤ 10^6, the time complexity can be O(n log n).
If n ≤ 10^8, the time complexity can be O(n).
If n > 10^8, the time complexity can be O(log n) or O(1).



10! = 1e7

sqrt(x) ka stl use karlo yaa fir usko nikall sakte ho using Binary Search


int ka range= [  (-2^n-1) , (2^n-1  - 1) ] ==== approx 10^9 tak allow karta he 
only positive hota to [0 , 2^n -1]

//!remember int--------10^9    (so INT_MAX goes upto 1e9+7)   (32 bit ki size of int)   so ye dono yaad rakna ki 10^9 in integer and 32 bits in binary
 //!   long long-------10^18   approx itna allow karta he     (64 bit ki size of long)
 

type casting karte time dono side type cast karna

int x = 1e8;
int y = 1e9;

long z = x*y;   (//!overflow hoga as x*y dono multiply hoke pehle int main store hote jo nahi ho sakta)
long z = (long)(x*y)  //! ab multiply hote hi long me jaaenge as long long 1e8 * 1e9 allowed he

//! VIMP while using pow if pow is overflowing
long long ans = (long long)(   pow(x,2)   );


2^31 - 1 bhi use hota he what is this its also integer only but signed integer me usually [-2^31+1, 2^31-1]

--------------------------------------------------------------
log in c++

1. only log2() and log() is allowed in STL
double x = log2(n);
double x = log(n);

//if you want log3(n)
double x = log(n) / log(3);

// log is always stored in a double and to check if this double is integer or not
double x = log2(n);

if( floor(x) == x ){} //then x is an integer

//WHERE IS LOG USED ---> while power checking

check if n is power of 3 ?

3^x = n 
x = log3(n)   //check if this guy is an integer now as simple as that see upar how to do this
    


--------------------------------------------------------------
//! pow(i,x) gives u a float/double value and this works for negative powers also
//! so a % pow(i,x) would be invalid as % ke saath hum decimals avoid karte he

//! iterating over numbers karna he to fir while(temp!=0){ int last = temp%10 ;    temp=temp/10;}
//! this helps while creating numbers ie sum = sum*10 + last

//! use the negative approach what is this? wo saare condition likho jaha pe bt hogi and return false inside them and then last me return true;
//if(x){return false;}
//if(y){return false;}
//if(z){return false;}
//return true;
-----------------------------------------


tree LL graph

tree me nodes hote he and left right hota he 
LL me nodes hote he and next hota he 
graph me integers hote he connected by adj list


-------------------------------------------
generating substrings O(n^2).     using 2 pointer i and j      as ( i= 0 to n ) and (j=i to n)
generating subsequence O(2^n).    using generator ka recursive function  

selecting a pair (i,j)  O(nc2)    using 2 pointer i and j      as ( i=0 to n ) and (j=i+1 to n)




---------------------------------------------
sqrt(x)

iska stl he int x = sqrt(x);

//implementation he using bs
0 to x ka search space rakho and karo find check karo if mid*mid == x he kya and move pointers acc



---------------------------------------------


1.stock buy sell ka max diff when (sell ka index > buy ka index) 

//dmm(difference le,maximum of diff kar,minimize buy) //and buy ko start me index 0 pe set karna


2. reverse a no : ans=ans*10 + rem //! VIMP
3. dec to binary

    while(n!=0){
        int rem = n % 2;                    //! VIMP here n/10 aur n%10 nahi balki n/2 and n%2 karna hota he 
        ans=ans + rem * pow(10,i)           //! for proper indexing pow(10,i) karna padega
        n=n/2;
    }






3.generating all possibilites
_ _ _ in tin spaces me every space can have ( or ) so give all possible combinations remember pcp follow hoga isme ie //!push call pop

void generator(int i,string &s){
    if(i==n){
        //yaha mil jaega string
        //return ; karna is VIMP
    }

    s=s + '(';
    generator(i+1,s);
    s.pop_back();

    s=s+')'
    generator(i+1,s);
    s.pop_back;

}


// sometimes generator function me bhi dp lagani pad sakti he but void se int me aajana fir
// jab take nottake pe condition nahi but final string must be divisible by 25 ye final string must be a palindrome jesa kuch ho
//bas ek final condition ho jisse i==n wale bc me handle kare true he to return 0 warna ditch the entire route

int generator(int i,string &s){
    if(i==n){
        if(check final case ki s kesa hona chahiye){return 0;}
        return ditching_case                                          //matlab return -1e9 for maximum dp problem and +1e9 for minimum dp problem

    }

    s=s + '(';
    int do = 1 + generator(i+1,s);
    s.pop_back();

    
    int dont_do = 0 + generator(i+1,s);
    

    return min( do , dont_do )
}





3.1 All possible subsets bhi ese hi nikaal sakte ho jese generator wale function ko kiya tha

void recursion(int i,string ip,string &op){
if(i==ip.size()){
    cout<<op<<endl;     //YAHA PE HI PRINT MARWA SAKTE HO
    return ;}

op= op + ip[i];
recursion(i+1,ip,op);                             //!push call pop call
op.pop_back();
recursion(i+1,ip,op);


}

int main(){

string i="abc";
string op="";
recursion(0,i,op);

}



4. Perm

abc ke saare perms: abc,bca,bac etc...

void perms(int i,vector <int> &arr,int &count){
    if(i==arr.size()-1){
        for(auto itr: arr){cout<<itr<<" ";}
        cout<<endl;}
    }
   
   
    for(int k=i;k<arr.size();k++){
        swap(arr[i],arr[k]);               //remember swap call swap
        perms(i+1,arr,count);          
        swap(arr[i],arr[k]);              //backtrack karna in for loop wala 
    }



    ------------------------------------------------------------

    //! perm me 

    for(int j=i;j<n;j++){
        swap
        call
        swap
    }


    //! generator for subset me do call aate he

    s.push_back();
    call                //call for take
    s.pop_back;
    call                //call for dont take


    ------------------------------------------------------------





    5.no from start 
    [1,2,3] == 123
    //array se number me laana ho to use same concept of reversing the no 
    for(int i=0;i<n;i++){
        sum=sum*10 + arr[i]  {{remember this ki sum = sum*10 + rem }}
    }

    and then stoi(s) and to_string(x)   //! ALWAYS use stoi with if(s.length()){int x=stoi(s)} becuz exception throw karega is s is empty



    6.sorting me bas merge sort and heap sort (mh) hi nlogn me kaaam karta he and also ll ke sorting me merge sort help karti he and merge sort ki SC:O(n) hoti he lekin heap sort ki to O(1) hojati he
    void ms(int s,int e,int arr){
    void ms(int s,int e,int arr){
        if(s>e){return ;}
        int mid=
        ms(s,mid)
        ms(mid+1,e)
        merge2sortedarrays(s,mid,e)    //one array is from s to mid and other is from mid+1 to the end
    }
    
//! jabtak ek ek tukde me tutega nahi tabtak merge nahi karna 


5. SUBBARAYS 

//sum of subarrays=k (nooo sliding window simply x-y=k so find if k-x exists in the set)            //where x and y are prefix sum from the start to any 2 random points on the array and not 2 array elements rather sum upto those points
//count of subarray=k (again no sliding windows x-y=k so u need a map now to store indexes also)



6.union and intersection

union: push everything in a set and u get your ans

intersection: //!VVVVIMP isme map banana hoga to store freq for arr1 and then arr2 par iterate karna hoga and jiska freq 1 he usko hi push karo and after every iteration decrease the freq of that element from the map
https://leetcode.com/problems/intersection-of-two-arrays/submissions/991526428/



//follow up : union and intersection of 2 arrays
//isme i arr1 pe rakna and j ko arr2 par rakna and then aage jaate jaana




7. min and second min  ||  max and second max || largest two || smallest two || max1 max2 || min1 min2


//bas standard wale me hi ek line aur dalna he and u can do the same changes for maximum wale also
for(int i=0;i<n;i++){
    if(min>arr[i]){
        min=arr[i];
    }
}



//! ------------------------------------------------------------------------
//!                                   max1                              max2
//!                 arr[i]                                                                      ye to faltu case he as maxi1 and maxi2 isse bade he



//! ------------------------------------------------------------------------                    
//!                                   max1                              max2                      isme max1=arr[i] kardenge
//!                                                  arr[i]

//! -------------------------------------------------------------------------------------
//!                                   max1                              max2
//!                                                                              arr[i]            isme max2=arr[i] kardenge and max1=max2



//! VIMP ki initialize with theese guys cause agar arr[0] se initialize karte ho dono ko to aage thode boundary cases me atkega code
int max1 = -1e9;
int max2 = -1e9;

for(int i=0;i<n;i++){
   if(arr[i]<max1){//faltu case}
   else if (max1<arr[i] && arr[i]<max2){max1=arr[i]}
   else if(max2<arr[i]){                                                            //! agar [5,9,1,9] agar isme answer 9,9 chahiye to is case me equality daalo warna answer 9,5 dega ye wala code
    max1=max2;
    max2=arr[i];

   }
}



-------------------------------------------------------------------------------------------


8. COMMON SENSE

[1,a,b,3,c,4,d] sirf agar a b c d pe iterate karna he to???

simple //pure pe iterate karo and if statement laga do for selective iteration 
for(int i=0;i<n;i++){
    if(a[i]=='a' || a[i]== ... )
}



//! VIMP (1-x ka function likna)
//binary flips karni ho toh
0--->1
1--->0     
// 1-x likh dena sidhe sidhe nigga



-------------------------------------------------------------------------------------------------------------------------

9. MINIMUM NO OF STEPS 

//! mere bhai dp mat hi lagana 
//! steps matlab bfs hi hoga


------------------------------------------------------------------------------------------------------------------------

10. stacks , queues , heap(priority queue)


stack me push aur pop dono right se hoga
stack [2,3,4] push(1) ===>  [2,3,4,1]
      [2,3,4] pop     ===>  [2,3]


queue me push right se hoga but pop left se hoga
queue [2,3,4] push(1) ===>  [2,3,4,1]
      [2,3,4] pop     ===>  [3,4,1]



heap(priority queue (not like a queue rather like a stack jisme push aur pop dono right se hoga))


minheap [2,3,4] push(1) ===>  [4,3,2,1]   min heap me upar minimum     (kth largest)
maxheap [2,3,4] push(1) ===>  [1,2,3,4]   max heap me upar maximum     (kth smallest)

max ya min me pop to right se hi hoga  === [4,2,1]  pop() ===> [4,2]

-----------------------------------------------------------------------------------------------------------

11. STRING CHARACTER INTEGER CONFUSION ! 








//1.------------------------------------------------------------------------
string to integer  
string s= "123"
int x = ?
int x = stoi(s);
//before using stoi be sure s is number wala string hi

alternative:
if stoi doesnt work
s[i] - '0' karke iterate bhi kar sakte 

" si - '0' " yaad rakho yaar

string s= "a"
to fir yaha par si-'0' to nahi lekin si-'0' to chal jaega aur si bhi nahi lekin s[0] - 'a' chal jaega to be precise



//2.-----------------------------------------------------------------------
int to string

int x=10;
string s=?

string s = stoi(x);

alternative : stoi ka dne 



//3.characters to string kese banana---------------------------------------

char a='a';
char b='b';
string s = "" + a + b;    (error dega)

//! ye karo always ki empty string ko initialize karo as "" and then for loop and then next line start doing whatever u eant to error nahi dega

string s="";
for(){
    s=s+a;
}


//4 string to character--------------------------------------------------
string s="A";

char ch = s[0];    lol s[i] karke ho jaata bas ye


---------------------------------------------------------------------------------------------------------

24hr clock related qns

HH:MM == 12:40 to isko convert to an integer simply == 12*60 + 40 or (HH*60 + MM) 



------------------------------------------------------------------------------------------------------------

//!Bitwise operations BC

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


//2.check if x is power of 2
x & (x-1) = 0  

only wont work for x=0


//3. Playing with the kth bit (right se) in x
 x & (1<<k)   == 0 or >0 yahi do cases he dhyaan rakna ya to 0 ya to greater than 0



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

//4.multiply or divide a no by 2^k
multiply = x<<k
divide   = x>>k


10>>1 or 10/2

10 = 1010 
10>>1 matlab right shift by 1 element right shift me right se kaato 1 element
1010 = 10 
101  = rightshift by 1

10/2=5
10/2=5


5<<1 = 5*2
5<<1 matlab right me hi ab kato mat balki zeroes add karo to yaha ek zero add kar
101  =5
1010 =left shift by 1

1010 = 10 
5*2=10


-----------------------------------------------------------------------------------------------------------------------------------------------------
Linked list wala concept

when you want to make a new list bohot asan he 
Node * n1 = new Node(0);   //u start by making a dummy node remember this will be the tail in the later stages ie n1 will be the tail later
Node * h1 = n1;            //u know tail that is n1 so now you also need to know the head that is h1 and assign it

for(int i=0;i<n;i++){
    Node * newnode = new Node(i);

    n1->next = newnode; 
    n1= n1->next;
}

h1=h1->next                   // alwyas ye karna mat bhula as you dont want the dummy node


                                        //         h1                       n1                        so essentially you have head and node of the list
//lets say finally the LL will look like       0 -- 0 -- 1 -- 2 -- 3 -- 4 -- 5


//! TYPECASTING

int a = 10^5;
int b = 10^5;
long c = a*b ; //bt hogi isme 

//because

int a = 10^5; //fair he as int me 10^9 tak allowed he 
int b = 10^5; //fair he as int me 10^9 tak allowed he 
long c = a*b ; //because int*int = int so 10^10 is initially int(not possible) later typecasted into long

//better approach 
int a = 10^5;
int b = 10^5;
long c = (long)a*(long)b ;  //har variable ko typecaste karna ese andar andar jaake


-------------------------------------------------------------
nc2 ka optimized code (total no of ways you can select any 2 elements)

//normal code
return (n*(n-1)) / 2 ;  //! problem ye he isme ki n*(n-1) can become very very big sometimes

//! so you can pull in the 2 inside to avoid such a big multiplication
//! n ya n-1 dono me se koi ek to even hoga so divide that by 2 and multiply the rest simply

long long nc2(long long n){
        if(n%2==0){
            return (n/2)*(n-1);
        }
        else{
            return (n)*((n-1)/2);
        }
    }



----------------------------------------------------------------

Wrapping / Rotation / Jumping in strings

example ke lie ye dekho
shift('a') = 'b', shift('c') = 'd', and shift('z') = 'a'.

'a'+1 ='b'
'c'+1 ='d'
'z'+1 = to yaha a nahi ayega as z ka ascii+1 hoga yaha which is definitely not a


//ye baat dhyaan rakna while wrapping/rotation we want INDEX values and not ascii values


ascii  (s[i])            97  98 99 100
                         a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
index (s[i]-'a')         0  1  2  3  4                                                              25


//so if we consider indexes we can consider it to wrap around %26

so if you had to calculate z+1 then,
  
  ('z'+1) % 26 = wont work as z will be put in ascii dude

  ( ('z'-'a')  +1 )%26  = ( 25 + 1 )%26 = 26%26 = 0 okay this gave you the index so you need to add 'a' to get the char 0+'a' = 'a'
      


//MOST GENERALIZED FORMULA
 ( (s[i]-'a')  + jumps )%26  + 'a'







----------------------------------------------------------------------------


