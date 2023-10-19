//! Arrays
merge 2 sorted arrays : 2pointer approach
move zeroes in between of the array to the end of the array :2pointer approach i and j maintain karo and dekho jaha a[i]=0 and a[j]!=0 tab swap mardena : https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
maximum 2 elements in :
//! One method ye he ki do baar for loop lagado
//! alternate efficient method he ki ek baar for loop lekin maxi1 and maxi2 maintain karna 

//! Lekin agar map wagera me 2nd largest freq puch leta he to obviously do baar loop chalake ans de dena


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
iterating over it is simply u need a node*temp=head and while(temp!=NULL)
storing 1234 in LL first put 1 in node * head=new node(1); then while(n!=0){node * newnode=node(n%10);head=head->next} this head=head->next is vimp



//! Tree
//! IMP : ki int l and int r karke left and right heights nikalo


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





//! DP
1.count path {int r=f(i,j+1)   int d=f(i+1,j)  return d+r}   TC: 2^(m*n) because har element ke lie 2 possibilities after memoization it becomes TC(m*n) and SC:(  Recursion ka auxillary stack space + Memoization ka space for making 2d vector          )
2.LCSubst AND LCSubseq KA code same hi hota he sirf LCSubstr me else wale condn me 0 daalna hoga and pure 2d matrix ka maxm element batana hoga
3.min insertion deletion palindrome ye sab LCS se ho jaega



//! STRING
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

// Check if a string is subsequence of another
kuch nahi he bas 2 pointer leke karna count++ jaha equal and count=smaller string ka length ho to ha s2 will be subseq of s1

//Check 



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



//! Generate all permutations of a string
void f(int i,string &s){
    if(i==n-1){cout<<s;}   //BC
    
    for(int j=i;i<n;i++){
        temp=s;                         //agar temp string nahi use karoge to fir ABC then A->A so ABC then A->B BAC then abhi BAC will be used but we wanted ABC me A->C but here we have a BAC instead which we dont want this ye bt islie aarahi he because you are passing it by reference so next stage wale ke answer/string value previous stages me bhi jud jaaenge
        swap(temp[i],temp[j]);
        f(i+1,temp);

    }

}


//! GENERATE ALL BINARY SUBSEQUENCE OF SIZE=N
concept: backtracking as generate karna he to fir 
n=2 to 01 10 11 00 ye saare

simply
"" isme ya to 1 jodoge ya to zero to ek baar one jodke fn call then ek baar zero jodke fn call
       
       
       ""
   
    "0"   "1"


so pehle 0 ko push then call fn then pop zero (PUSH CALL POP ( PCP rule for backtracking ) )

void generator(string &s,int n){
    if(n==s.length()){cout<<s<<endl;return ;}
    s.push_back('0');
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

merge 2 sorted arrays ->use 2 pointer and a new vector array to store the answer2
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

maximum 2 elements freq :
//! One method ye he ki do baar for loop lagado
//! alternate efficient method he ki ek baar for loop lekin maxi1 and maxi2 maintain karna 

//! Lekin agar map wagera me 2nd largest freq puch leta he to obviously do baar loop chalake ans de dena



find if a pair exist with given sum
//simply store the sum in a set and iterate through array and check if sum-arr[i] is present in the set or not

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









