//! Arrays
merge 2 sorted arrays : 2pointer approach
move zeroes in between of the array to the end of the array :2pointer approach i and j maintain karo and dekho jaha a[i]=0 and a[j]!=0 tab swap mardena : https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab



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

int f(root,&    maxi){
    if(root==NULL){return 0;}
    int lh=f(root->left);
    int rh=f(root->right);
    maxi=max(maxi,lh+rh+1);
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


//! Generate Permutations and Subsequences/Subset are recursion backtracking ke qns
#include <bits/stdc++.h>
using namespace std;

void recursion(int i,string ip,string &op){
if(i==ip.size()){
    cout<<op<<endl;     //YAHA PE HI PRINT MARWA SAKTE HO
    return ;}

op= op + ip[i];
recursion(i+1,ip,op);
op.pop_back();
recursion(i+1,ip,op);


}

int main(){

string i="abc";
string op="";
recursion(0,i,op);

}

//!Sorting
SIBM
selection O(n^2)
insertion O(n^2)
bubble O(n^2)
maerge sort O(nlogn)

merge 2 sorted arrays ->use 2 pointer and a new vector array to store the answer2
sort an array having 0s 1s 2s simply make a map and store freq and populate a new vector


//! Target sum Pair
a+b=10
then b=10-a and at every element try to find 10 - arr[i] is present in the array or not



//! 2D array

//spiral traversal just maintain top,bottom,left,right
//transpose of a 2d matrix swap(arr[i][j],arr[j][i]) karna he and double for loop me ek hi side chalana he agar dono chala diye to fir back to original array hoga



//! MAP
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


