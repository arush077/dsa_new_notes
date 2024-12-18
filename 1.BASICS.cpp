//! hcf/gcd and lcm

for hcf(a,b)

a aur b ka min lena and fir waha se piche ki taraf iterate karna till 1 because the least it could be is 1
int x=min(a,b);

//ek base condition bhi dalna if(a ya b me se koi ek zero hua){to dusra wala answer hojaega}
for(int i=x;i>=1;i++){
    if(a%i==0 && b%i==0){return i;}
}


//recursive code for hcf
int f(int a,int b){
if(b==0){return a;}
else{return f(b,a%b);}
}





//! Subsequence, Subset , Subarray , Substring

Subsequence, Subset => discontinous
subaaray, Substring => continuos



//unordered set me pair kabhi nahi dal sakte ==== ordered set use karo pair dalneko






//! Arrays
merge 2 sorted arrays : 2pointer approach
move zeroes in between of the array to the end of the array :2pointer approach i and j maintain karo and dekho jaha a[i]=0 and a[j]!=0 tab swap mardena : https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
maximum 2 elements in :
//! One method ye he ki do baar for loop lagado
//! alternate efficient method he ki ek baar for loop lekin maxi1 and maxi2 maintain karna 

//! Lekin agar map wagera me 2nd largest freq puch leta he to obviously do baar loop chalake ans de dena


array me 2 elements uthane he -> 2 for loops lagenge
find a pair whose sum=10 ya ese cases me brute force me tumhe do element uthane padenge
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){

    }
}


array me 3 elements uthane he -> 3 for loops lagenge
array me 4 elements uthane he -> 4 for loops lagenge





//!Graph
Toposort :indegree banao and then simply queue banao and indegree fill karo and queue fill karo and queue me wo elements daalna jinke indegree 0 ho.
          while (!q.empty) tabtak q.top ko ans me dalo and pop maro
          then adjnode ki indegree-- karke if indegree==0 then push it back in the queue

//DFS
jabhi stuck hounga ya destination reach karunga tabhi backtrack karunga
VAN 1.visited ko true 2.ans me pushback 3.neighbors ko call 4.always neighbor call par dekh lena ki visited he ya nahi

void dfsrec(node,adj,visited){
    visited[node]=1;
    ans.push_back(node);
    //neighbors
    for(auto nextnode : adj[node]){
        if(visited[nextnode]==0){
            dfsrec(nextnode);
        }
    }
}


//!CYCLE DETECTION (CONCEPT: ki wahi node par wapas aajaooooooooo to cycle detect)
//!UNDIRECTED GRAPH (2 ways) : isme dfs+parent approach lagana undirected walo me ki (((nextnode))) is not parent + it is already visited 
//!DIRECTED


//BFS
I W N (VP)
1.Initialize visited[src]=1;q.push(src);
2.while
3.neighbors ko call but call karke pehle yahi puchna ki visited ho ya nahi
4.visited ko true
5.push karo

int main(){
    queue <int> q;
    q.push(src);
    visited[src]=1;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        //neighbors
        for(auto nextnode:adj[node]){
            if(visited[nextnode]==0){
            visited[node]=true;
            q.push(node);}
        }
    }
}














//! LL 
//always initialize the node in tree and ll wale qns.
iterating over it is simply u need a node*temp=head and while(temp!=NULL)
storing 1234 in LL first put 1 in node * head=new node(1); then while(n!=0){node * newnode=node(n%10);head=head->next} this head=head->next is vimp



//! Tree
//! IMP : ki int l and int r karke left and right heights nikalo


//always initialize the node in tree and ll wale qns.

//Maximum height
int f(root){
    if(root==NULL){return 0;}
    int l=f(root->left);
    int r=f(root->right);
    return 1 + max(l,r);
}

//Maximum Width or Max dist b/w 2 nodes
concept height wale hi code me tweak karna hota he simply ek naya maxi variable banana and then iss maxi variable passby ref ko use karna to find the maximum width 

int f(root,int &maxi){
    if(root==NULL){return 0;}
    int lh=f(root->left);
    int rh=f(root->right);
    maxi=max(maxi,lh+rh+1);     //! extra line jo height wale code me insert kiya he and maxi hold karega answer of maximum width
    return 1 + max(lw,rw);
}


//Maximum Sum Path in a Tree
int f(root){
    if(root==NULL){return 0;}
    int ls=f(root->left);
    int rs=f(root->right);
    return root->val + max(ls,rs); 
}


//BFS of Tree

queue <node *> q;
q.push(root);
while(!q.empty()){
    node * newnode=q.top();
    q.pop();

    //now neighbors
    if(root->left!=NULL){q.push(root->left)}
    else{q.push(root->right)}
}





//DFS
inorder
void f(root){
    if(root==NULL){return ;}
    f(root->left);
    ans.push_back(root->val);
    f(root->right);
}

//ese hi pre aur post order bhi likh lena

//minimize the maximum is always BS

//!GREEDY
1.N meeting rooms
2.Min cost to cut the ropes (sort the array everytime after you join 2 elements and join only the smallest of the two so pehle minheap me sabko bhardo and upar ke do le lo and sum karke wapas heap me feko)
3.Chocolate and packet problem so that to distribute among M students max-min is min (sort karde array ko aur fir arr[0] and arr[0+M] dekh lena)


//!MULTIPLICATION of 2 numbers


//rattlo ye code likne me bt hogi 

//make a new array of n+m size
   23
   54
  -----


[0,0,0,0]



vector<int> num(num1.size() + num2.size(), 0);   //product ka max size dono numbers ke sum ke barabar hi hoga and here we store the ans into a vector rather than integer because integer par restriction aati he of 2^31-1 approx 10^9 but usse badi chiz hui to vector me store karna because vector me theoritically to infinite size store kar sakte ho
  for (int i = num1.size() - 1; i >= 0; --i) {
            for (int j = num2.size() - 1; j >= 0; --j) {
                num[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');  //num1 and num2 dono string me given he 
                num[i + j] += num[i + j + 1] / 10;                    //fir carry nikalke aage wale me dalo
                num[i + j + 1] %= 10;                                 //present space par % 10 karna to get the last digit 
            }
        }


//! DP
1.count path {int r=f(i,j+1)   int d=f(i+1,j)  return d+r}   TC: 2^(m*n) because har element ke lie 2 possibilities after memoization it becomes TC(m*n) and SC:(  Recursion ka auxillary stack space + Memoization ka space for making 2d vector          )
2.LCSubst AND LCSubseq KA code same hi hota he sirf LCSubstr me else wale condn me 0 daalna hoga and pure 2d matrix ka maxm element batana hoga
3.min insertion deletion palindrome ye sab LCS se ho jaega

//!----------------------------------------------------------------------------------------------------------------------

//! STRING

./strings/stringconversions.drawio ye wali file pls dekhlo isme saare string conversions he ck



//!VVVVIMP

ch--->int     ch-'0'
int--->ch     ch+'0'

"0000" -> "0010"
   |
   i

s[i]=s[i]+1; //ye bohot bt dega esa karoge to 
//better method

s[i]= (int me convert karke calculations perform) then convert this shit back to char
s[i]= ( (s[i]-'0') + 1 ) + '0'
      ------------------
               |         -----
               |           |
              int         int ko char me karne ko -'0' kardiya 



------------------------------------------------------------------------------WHY NOT TYPECASTING

char ---------> int (ASCII / VISUAL)
'9'  ---------> ASCI =32 / VISUAL =9

to get in ASCII u need to type cast it
(int)ch

to get in visual u need to -'0'
ch-'0'


1  ------>'1'   to 1 + '0'
'1'------> 1    to '1'-'0'

'a'------>0     to 'a'-'a'
 0------->'a'   to 0 + 'a'

 






most imp 
char ch='3'; //especially string ke qn me to 100% use hoga now u need 3 and not '3'
int x= ch-'0';








--------------------------------------------------------------

concept

char ---------> int (ASCII / VISUAL)
'9'  ---------> ASCI =32 / VISUAL =9

to get in ASCII u need to type cast it
(int)ch

to get in visual u need to -'0'
ch-'0'



















char ch= 'a' ;
iska matlab he ch------0 to 127 ke beech koi ek value rakhega bas those are the ascii values
cout<<ch; ---->a
cout<<int(ch)---> a ki asci 97

-----------------------------------------------------------
char ch=97;
iska matlab he ch------48 ascii code ko store kiya he 
cout<<ch ----> a
cout<<int(ch)-->97

int x=97;
cout<<x;--------->97
cout<<char(x)---->a

so char(x) ya fir int(ch) karke type cast karlio to get the letter or the ascii number

-----------------------------------------------------------



queue vs stack

queue me niche se popping hoti he
stack me upar se popping hoti he 


pushing remains the same b/w the two
aur islie q.front() hota he kyuki sabse niche wala is the front wala and stack me s.top() hota he as sabse top wala upar wala hota he 














------------------------------------------------------------
 //!recursion imp qns

 //!IBH method me wherever u make the call maanlo usne pop karne ke baad aage ka pura solve karke wapas kardiya ab aage ke steps karo


 reverse a stack using rec
 rev a queue using rec
 sort a stack using rec
//non dp recursion ke qns he usko ibh try karo
//aur ek chiz stack and queue me bas popping ka difference hota he pushing mechanism is same
//dono me upar se push hoga but popping queue me niche se and stack me upar se hoga




eg : reverse a stack using rec
//visualize it vertically pls

// stack : 1 2 3 4 5 


//step1: pop :  stack : 1 2 3 4    temp=5


//step2: call : rev(stack)------------>
//                        <------------

//              stack: 4 3 2 1     temp=5

//step3: ab is temp ka kya karo u need to insert this at the bottom but bottom me dalneko u will have to call another funtion bottom


///    stack: 4 3 2 1    x=5
//now write the bottom function

// step1: pop stack:4 3 2   x=5  temp=1 
// step2: call bottom(stack,temp)------------>
//                                <------------
//step3: stack : 5 4 3 2      temp=1
//step4: shit is done 5 ko niche daba diya he ab bas temp ko puch karo
//stack : 5 4 3 2 1      


//code

bottom(stack<int>st,x){
if(st.size()==0){st.push_back(x);return ;}           //dont forget that return in void functions 
int temp=st.top();
st.pop();
bottom(st,x);
st.push(temp);
}

reverse(stack<int>st){
if(st.size()==1){return ;}
int temp=st.top();
st.pop();
reverse(st);
bottom(st,temp)
}

--------------------------------------------------------------------------------------

//reverse a queue(V easy)

queue= 1 2 3 4 5


//step1: pop :  queue : 2 3 4 5    temp=1   (queue me niche se popping)


//step2: call : rev(queue)------------>
//                        <------------

//              queue : 5 4 3 2     temp=1

//step3: ab isme temp ko upar hi push karna he unlike stack wala case jaha bottom me push karna tha
             
//               queue : 5 4 3 2 1     temp=1   

//code

reverse(stack<int>q){
if(q.size()==1){return ;}
int temp=st.top();
q.pop();
reverse(st);
q.push(temp);
}
------------------------------------------------------------------------------------------------


//merge intervals


//simply bas ans.back()[1] par nazar rakho 
//ek if and ek else condition dalo ek normal for loop ke andar




       vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());

        for(int i=0;i<intervals.size();i++){


            if(ans.size()==0 || ans[ans.size()-1][1]<intervals[i][0] ){                                         //remember pushing tabhi hogi when ans empty ho ya fir ans ka first index bada ho
                //pushing hogi
                ans.push_back(intervals[i]);
            }

            else{
                //no pushing only merging at second index of last element of ans                                //else me bas ans ke first index ko maximize karna he
                ans[ans.size()-1][1]=max(ans[ans.size()-1][1],intervals[i][1]);
            }


        }

        return ans;




//easy notation
ans[ans.size()]=======ans.back()

ans[ans.size()-1][1] =====ans.back()[1]











string wale qns me s=abcd isme map use karna hoga to fir
space complexity will be O(1) only because jyada se jyada keys 26 hi ho sakte he so 
O(26)==O(1).
so string wale qns me map use karne pe SC:O(1) hi rahegi


stoi ==> converts string to integer   //! ALWAYS use stoi with if(s.length()){int x=stoi(s)} becuz exception throw karega is s is empty
int x=stoi(s1);



// Pattern matching O(N*M) se to kar hi sakte he very easily
matlab i iterate karega s1 pe and s2 pe j iterate karega 
but u comapare s1[i+j] with s2[j]

    i  
c d a b c
a b d
j

j==0   s1[i+j] ==s2[j] ha ye he to count++;




    i  
c d a b c
a b d
  j

j==1   s2[i+j]==s2[j] ha ye to he so count++;

    i  
c d a b c
a b d
    j

j==3 s2[i+j]==s2[j] doesnt hold so break out of the j loop








for(int i=0;i<s1.length-s2.length;i++){
    for(int j=0;j<s2.length();j++){
        if(s1[i+j]==s2[j]){
            count++;
        }
        else{break;}
    }
    if(count==s2.length()){return true;}
}

return false;


warna fir KMP lagake khush rehna O(n)
RK=> rabin karp ya fir KMP algorithm lagate he warna


// Check if a string is subsequence of another
kuch nahi he bas 2 pointer leke karna count++ jaha equal and count=smaller string ka length ho to ha s2 will be subseq of s1


//occurences bhi mapp me store kar sakte ho (used for isomorphic string checking)
abaaxa
a=> 0,2,3,5
so a occurs on these indexes so unordered map <char,vector<int>> m;
m[str[i]].push_back(i);



//!------------------------------------------------------------------STRINGS-------------------------------------------------------



//! HEAPS
1.find k largest elemetns in an array
2.sort a k sorted array (woi karna he minh me daalte jaao jabtak overfill fill nahi hota jab >k hoga tab uthake ans vector me daal dena)
3.K closest neighbors (difference nikalo and is difference pe heaps khelna)
4.top k frequent nos (simply map me pehle freq store key:freq karo fir isko minh me daalo in the form of a pair how ?   for(auto itr:m){minh.push(itr.first,itr.second)}           to see ki top 2 ya top k kon he)
5.


   t1
1  2  3
3  1  4
   t2


h
4

nn=

t1->next
t2->next
while(t1!=NUll || t2!=NULL){
//new node
head->next=newnode
head=head->next
}


//! Generate Subset are recursion backtracking ke qns
//! GENERATION WALE QN USUALLY BACTRACKING SE HI HONGE


//! RECURSION VS BACKTRACKING
//recursion = normal variable   +   increament in function itself.
//backtracking= byreference var +   increament outside of function calls(with nescessary decreaments also)




REMEMBER KI 2^N lagega blud
ABC ka 
subsets ko size ke nazariye se dekho
size=1 A,B,C
size=2 AB BC AC
size=3 ABC

#include <bits/stdc++.h>
using namespace std;

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


//! PERMUTATION KA DEKH LE YAAR in recursion wala folder if you want drawio uska
//! "front partion types marke swap(temp[i],temp[j])" karna

//! Generate all permutations of a string s



                   i
                   abc       
      [  abc         bac          cab  ]    (for loop ka natija from i to last element)
                                                              
          i           i            i
         abc         bac          cab
      [abc acb]    [bac bca]     [cab cba]    (for loop ka natija from i to last element)
 

    void f(i,s,   vector<string> ans){

        if(i==s.length()){
            //bas push karo 
            ans.push_back(s);
            return ;                     //! VIMP to return 
        }

        for(int j=i;j<s.length();j++){          //! front partition kar aur fir swap call swap karde matlab i ko pakdo aur j ko chalao and swap karke call karo
            swap(s[i],s[j]);              
            f(i+1,s,ans);
            swap(s[i],s[j]);
        }


    }







    void f(int i,vector<int>nums,vector<vector<int>> &ans){ 
    if(i==nums.size()){ans.push_back(nums); return ;}   //BC  //!VIMP : BASE CASE ME "RETURN ;" bhi dalne ki aadat daalo 
    
    for(int j=i;j<nums.size();j++){
        swap(nums[i],nums[j]);
        f(i+1,nums,ans);
        swap(nums[i],nums[j]);

    }

}


//! GENERATE ALL BINARY SUBSEQUENCE OF SIZE=N
concept: backtracking as generate karna he to fir 

//! IMP == BY REFERNCE WALE VARIABLES KA HI BACKTRACKING HOTA HE !!!


n=2 to 01 10 11 00 ye saare

simply
"" isme ya to 1 jodoge ya to zero to ek baar one jodke fn call then ek baar zero jodke fn call
       
       
       ""
   
    "0"   "1"


so pehle 0 ko push then call fn then pop zero (PUSH CALL POP ( PCP rule for backtracking ) )


//! standard method to generate strings of length n by pcp push call pop method
void generator(string &s,int n){
    if(n==s.length()){cout<<s<<endl;return ;}   //RETURN ; dalna is VIMP
     
    generator(s,n);
    s.pop_back();
    s.push_back('1');
    generator(s,n);
    s.pop_back();
}


//! GENERATE ALL BINARY SUBSEQUENCE OF SIZE=N with no consecutive zeroes
//same upar ka code tepo just with one condition ki zero tabhi add hoga when last element of the string is not zero warna double zero ho jaega

void generator(string &s,int n){
    if(n==s.length()){cout<<s<<endl;return ;}
    
    
    if(s[s.length()-1]){        //! SIRF EK IF CONDN ZYADA HE BAAKI SAME AS LAST QN
    s.push_back('0');
    generator(s,n);
    s.pop_back();}


    s.push_back('1');
    generator(s,n);
    s.pop_back();
}










//!Sorting
SIBM
selection O(n^2)
insertion O(n^2)
bubble O(n^2)
maerge sort O(nlogn)


bubble ka code 
for(int r=0;r<n;r++){
    for(int i=0;i<n-r-1;i++){                             //yaad rakna n-r-1
        if(arr[i]>arr[i+1]){swap(arr[i],arr[i+1]);}
    }
}





merge 2 sorted arrays ->use 2 pointer and a new vector array to store the answer2

void mergesort(arr[],int s,int e){

    if(s>=e){return ;}

    int mid=(s+e)/2;

    mergesort(arr[],s,mid);
    mergesort(arr[],mid+1,e);
    merge(s,mid,e);                             //code to merge 2 sorted arrays

}

//! jabtak ek ek tukde me tutega nahi tabtak merge nahi karna 







sort an array having 0s 1s 2s simply make a map and store freq and populate a new vector


//! Target sum Pair =k
a+b=10(k)
then b=10-a and at every element try to find 10 - arr[i] is present in the array or not
here u want b=10-a ie u need to find if another element whose value is 10-a exist or not 
so u have to store the elements in the set and not the prefix sum in the set, prefix sum store tab karte he jab subarray sum=k chahiye hoga tab
[ 1 , 2 , 3 ]  k=3
  i

search if 3-1 occur in set or not since set is empty so its not so push in set and move ahead
set:1



[ 1 , 2 , 3 ] 
      i

search if 3-2 occur in set or not since it occurs in set (set : 1) so arr[i] and 3-arr[i] are one of your pair and now push 2 in set and move ahead
set: 1 2



[ 1 , 2 , 3 ] 
          i

search if 3-3 dne in set so push in set and move ahead 
set: 1 2 3 



//! Target sum Pair =k given that array is sorted
//sorted array me pair sum aaya to fir use 2 pointer ka concept

sum=3


 l         r
[0,1,2,3,4,5]

0+5 > 3 //so sum ko chota karna he to only one possible way move right pointer to the left r--;

 l       r
[0,1,2,3,4,5]
0+4 > 3 //so sum ko chota karna he

 l     r
[0,1,2,3,4,5]
0+3 =3 //so mil gaya  so now l++ and r-- dono karna hoga

   l r
[0,1,2,3,4,5]
1+2=3 //mil gaya so l++ r--

   r l
[0,1,2,3,4,5]  //stp now



//! Target difference

target sum me x+y=10  
// 10-y=x ya 10-x=y  matlab 10-present element hi hora he dono cases me

target difference me x-y=10
//y+10=x ya x-10=y   matlab 10+present element ya fir present element-10 dono possibilites aati he difference ke case me

//    unordered_set <int> s;
//     for(int i=0;i<size;i++){
//         if(s.find(arr[i]+n)!=s.end() || s.find(arr[i]-n)!=s.end() ){return true;} //! dono condition ayenge subtraction wale me
//         s.insert(arr[i]);
//     }
    
//     return false;








//!another 2 pointer approach used to solve 2sum and 3sum and 4sum problems is
//pehle sort karo then 2 pointers 0 and n-1 pe lo and dekho greddily

//first sort it
[1,2,3]
 i   j

while(i<j){

}

[1,2,3]
 i   j        tempsum=1+3 jo ki bada he k=3 se so chota karna hoga so i++ nahi karoge j-- karoge as its sorted


[1,2,3]       temp=3=k so now milgaya so now i++ and j-- karo 
 i j  

[1,2,3]      while loop break hoga ab
j  i


sort(ans.begin(),ans.end());
while(i<j){                                               TC:O(logn) but SC:O(1)
    int tempsum=arr[i]+arr[j];
    if(tempsum==k){
        //found
        i++;j--;
    }
    else if(tempsum<k){
        i++;
    }
    else{j--;}


}


//! so for 4 sum
// 3sum / 4sum me you have 3 options
//1. brute force, just 3 / 4 for loops laga dena
//2. ek for loop kam kar sakte ho by using a map[ but isme repeatitons ki issue ayegi so to avoid that you again have to use a set also (set bhi unordered set me vector allowed nahi hota so ordered wala use karna hoga) ] 
//3. do for loop kam kar sakte ho as [ 2 sum can be solved by 2 pointer approach] //so 3sum(one for loop and for other 2 you have 2 pointer approach) //so 4sum(2 for loop and for other 2 you have 2 pointer approach)
// but you will have to sort the entire array for the 3rd method and then loop lagana and uske andar 2 log nikalne ke lie 2 pointer approach




// 2 pointer approach and BS ka difference

// 2 pointer me s=s+1 ya e=e-1 hoga (jab sum diya hoga and 2 things adding upto that sum chahiye hoga in O(n))
// BS me s=mid+1, e=mid-1 hoga


pehle hi pure array ko sort maaro O(logn) + O(n^3)

2 pointer method se ek while se hi 2 variables nikal sakte ho

sort(arr.begin(),arr.end());
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        // i and j se 2 element select maar liye now while loop lagake 2 variables aur nikallo
        int newtarget = k-arr[i]-arr[j];

        int left=j+1,right=arr.size()-1;
        while(left<right){
           //woi code upar dekhlo 2sum ka likho
        }



    }
}


















 











//! Subarray sum =k

[ 1 , 2 , 3 , 4 , 1 ]  lets say k=8
          i       j

now lets say you were iterating on j so prefixsum(j)-prefixsum(i) = k 
so prefixsum(i) = k - prefixsum(j) 
just check if such prefixsum(i) exists or not in the set



bool subarraySumToK(int n, int k, vector<int> &arr) {
    unordered_set <int> s;
    int presum=0;
    for(int i=0;i<n;i++){
        presum=presum+arr[i];
        
        if(presum==k){return true;}
        else if(s.find(presum-k)!=s.end()){return true;}
        s.insert(presum);
    }

    return false;
}


//! yaad rakna presum+arr[i],presum=k,presum-k,s.insert(presum)

//!Count no of subaarays with equal zeroes and ones
// [0,1,0,0,1,1] 
// 0,1 or 1,0 or 0,1 or 0,0,1,1 
//concept 0-->-1 se replace kardo taake equal zero(-1 now) + equal one(+1) =0 ka sum de
//so no of subbarrays which give off 0 sum lol
// presum,presum==0,presum-0,s.insert









//Largest subarray of sum=k
same code sirf set ke badle map use karlena and that map will have index,presum 
index because size of subbarray chahiye 
presum because subarray of sum=k chahiye (subarray/substring/subsequence + sum=k 100% presum + map ya fir sliding window)



//! imp chiz he ki m.find(key) isko to auto itr me daldoge
//! but now to access it you need to do itr->first and itr->second




so if(presum==k){size=i+1;}
    else if (m.find()....){
        auto itr=m.find();
        int index=itr.second;
        ans=max(ans,i-index)
    }




//! 2D array

//spiral traversal just maintain top,bottom,left,right
//transpose of a 2d matrix swap(arr[i][j],arr[j][i]) karna he and double for loop me ek hi side chalana he agar dono chala diye to fir back to original array hoga



//! MAP


//ordered map ie map only me agar first element chahiye to 
mp.begin() === ye ek itr hoga to isme ->first and ->second karke access karna
auto itr=mp.end()   ye likhke itr->first and itr->second se access karneka


//ese -> hi karke aur ek chiz me hota he 
jab koi bhi map me find karte he 
auto itr=m.find(s[i]);
itr->first
itr->second


//looping me dot use karte he 
for(auto itr:m){
    itr.first
    itr.second
}







maximum 2 elements freq :
//! One method ye he ki do baar for loop lagado
//! alternate efficient method he ki ek baar for loop lekin maxi1 and maxi2 maintain karna 

//! Lekin agar map wagera me 2nd largest freq puch leta he to obviously do baar loop chalake ans de dena
//!noooo and 2nd largest frequency puche in map ka qn so use the R method and dont use ordered map 

//so mx1 and mx2 maintain karna simply
if(arr[i]>mx1){
    mx2=mx1;
    mx1=arr[i];
}

else if (arr[i]>mx2){
    mx2=arr[i];
}

//! YAAD RAKH LE IF + ELSE IF pehle wale me arr[i]>mx1 and dusre else if wale me arr[i]>mx2 
and yahi cheez ko map se replicate karna he
so
if(itr.second>mx1){
    mx2=mx1;
    mx1=itr.second;
}

else if(itr.second>mx2){
    mx2=itr.second;
}








find if a pair exist with given sum
//simply store the sum in a set and iterate through array and check if sum-arr[i] is present in the set or not




//! VVVVVVVV IMP
[5,1,5,2,3,4]
         |
         i
1.    to iske piche         = set use karle to check iske pehle wo aaya he ki nahi
   "5" aya he ya nahi

2.   to iske piche          = map use karni hogi to tell ki iske piche "5" do baar aaya hua he
    "5" kitni baar aya he

3.  map and set wale qn are of 2 types
    //1. pair of sum=k  -> tab to element ko push karna hoga set ya map me
    //2. subarray/subsequence of sum=k  -> tab to presum ko push karna hoga set ya map me









qn = if such a target sum pair present or not = use set.
qn = find count of such target sum pairs = use map.















Longest Consecutive Subsequence

simply dekhna he ki arr[i]+1=arr[i+1] kitne elements pe hold hoga
//count and maxi variable banao and maxi=max(maxi,count) kardo
vector <int> arr={1,9,3,4,2,20};
    int count=1;
    int maxi=-1e9;
    for(int i=0;i<arr.size();i++){
    if(arr[i+1]==arr[i]+1){
        count++;
    }

    else{
        count=1;
    }
    maxi=max(maxi,count);
    }

    cout<<maxi;

    }




//! Binary search

1.Find first and last occurence of an element in an array

//imp concept : ki ek ans variable banao and whenever arr[mid]==x dont return anything instead ans variable me store karo and start element chahiye to s=mid-1
//              and end element chahiye to e=mid+1 kardena inside of the arr[mid]==key

// int start(vector<long long> arr, long long x){
//         // int n=arr.size();
//         int s=0;
//         int e=arr.size()-1;
//         int ans=-1;
//         while(s<=e){
//             int mid=s+(e-s)/2;
//             if(arr[mid]==x){
//                 e=mid-1;
//                 ans=mid;
//             }
            
//             else if (arr[mid]>x){e=mid-1;}
//             else {s=mid+1;}
            
//         }
        
//         return ans;
//     }
    
//      int end(vector<long long> arr, long long x){
//     //  int n=arr.size();
//         int s=0;
//         int e=arr.size()-1;
//         int ans=-1;
//         while(s<=e){
//             int mid=s+(e-s)/2;
//             if(arr[mid]==x){
//                 s=mid+1;
//                 ans=mid;
//             }
            
//             else if (arr[mid]>x){e=mid-1;}
//             else {s=mid+1;}
            
//         }
        
//         return ans;
//     }





//! SLIDING WINDOW

// fixed size=k

while(i<n && j<n){
    sum+=arr[i];

    if(j-i+1<k){j++;}
    else if (j-i+1==k){

        //pehle max wagera nikalo uske baad fir sum-=arr[i] sab karo

        ans=max(ans,sum);

        sum-=arr[i];
        
        
        i++;
        j++;
    }
}



// variable size
sum=k ya kuch dede to 

while(i<n && j<n){
    sum+=arr[i];

    if(sum<k){j++;}
    else if (sum==k){
        maxi=
        j++;
        //shocking ki j++ karre ho equality pe bhi
    }


    if(sum>k){
        while(sum>k){

            sum-=arr[i];
            i++;
        }


        //while ke andar i++ and negative cases hatao and while ke bahar j++
        j++;
    }





}





variable wale qns
Longest string with K unique char : var sliding window and simply map banana and if(m.size()<k) {j++}  if(m.size()==k){ans me dalna + j++}     if(m.size()>k){while(m.size()>k){m[arr[i]]--;i++}  j++   }
Longest string without repeating char : var sliding window + simply set banana as non repeating==set banana

zero flipping
Nice subarray




//! ERRORS

//runtime errors cout karke debug kardo 
dp walo me to 
f(i){
cout<<"upar"<<i<<endl;

fn calls

cout<<"niche"<<i<<endl;


}






//! Linked List

//loop detection ke lie floyd algo lagao of slow and fast pointer
//loop removal ke lie just use a visited set
 //1--->2--->3--->5
 //     |         |
 //     |         |
 //     |_________|

//to jese 1 par aaye ho to check if 1 is in the set : no , so push it in set
//wese hi 2 ko bhi push karo 3 ko bhi and 5 ko bhi set me dalo
//now when temp moves back to 2, 2 to already visited he and prev_node=5 so connect this prev_node to NULL





-----------------------------------------------------------------------------------------------------------
prefix postfix and infix 




postfix  eg : 7982*-/
prefix   eg : *-/7982
infix    eg : ((7*9) - 8) /2


//simple he postfix me left se right ki taraf iterate
//prefix me right se left ki tarah iterate
//number he to push karo stack me
//operator he to no1 and no2 nikalo from top of stack no1 operator no2 ke result ko wapas dalo stack me

        stack <int> st;
        for(int i=0;i<tokens.size();i++){
            string s = tokens[i];

            //stoi use karne se pehle andar dekho uske hamesha ek valid guy hi hona chahiye warna what():stoi ka error dega

            if( s!="+" && s!="-" && s!="*" && s!="/" ){
            int y=stoi(s);
            
            if(y>=0 && y <=9){
                //number he to push in the stack 
                st.push( y );
            }
            }
            else{
                //operator aaya he 
                int no2= st.top();
                st.pop();
                int no1 = st.top();
                st.pop();

                int x= 1;
                if(tokens[i]=="+"){x=no1+no2;}
                if(tokens[i]=="-"){x=no1-no2;}
                if(tokens[i]=="*"){x=no1*no2;}
                if(tokens[i]=="/"){x=no1/no2;}
                st.push(x);
            }
        }

        return st.top();


