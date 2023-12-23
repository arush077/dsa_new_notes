//!Reversing
reverse(s.begin(),s.end());
reverse only the selected part of an array
reverse(s.begin()+1,s.end()-1); //iska meaning he ki s.begin() points at first element and s.end() points at last element so s.begin()+1 will point at second element of array and s.end()-1 will point at 2nd last element


//! Set
set me iterate karne ko u need an iterator
s.erase(key);
s.clear(); to clear the entire thing

for(auto itr: s){
    cout<<itr; }

//! Map
find kardiya to uss element ko access kese kare ?

m.erase (key) to remove that shit

if(m.find(key)!=m.end()){

    auto itr=m.find(key);
    itr->first and itr->second use karna hoga iss map me to access the key and value pairs
//! IMP itr.first and itr.second usually use karte he but map is exception
}

// usual map traversal
for(auto itr : m){
    int key =itr.first;
    int value = itr.second;
}

//! Classes and Nodes
class Node
{
public:
    int val;
    vector<Node *> neighbors;
}

whenver u make a new node lets say
    Node *newnode = new Node(x);
int x         = newnode->val;
vector<int> v = newnode->neighbors;

//so accessing anything inside the class can be typically done by ((  ->   )) no matter what type of shit it is







m.erase(key) to remove that key value pair

typedef int p
typedef me hash nahi aaata
and public ke andar and fn ke bahar define kario
and define karte ho tabhi hashtag aata he 
#define mod 1003


normal sort an array = sort(arr.begin(),arr.end());
sort a 2d array












//!vectors and arrays

imp for loop ka alternative version 
vector<int> v={1,2,3};
for(auto itr : v) {//!ese mat karo}
for(int x : v){cout<<x;}  {//matlab jo v ka data type he uske hisaab se chalao harbaar auto lene ki zarurat nahi}

vector<Node*>v={10,20,30};

for(Node* n :v){cout<<n;}




//!size
proper array ka size nikalna ho to sizeof(arr)/arr(arr[0]) kardo

//! vectors me append function mat lagana kyuki esa koi STL hota hi nahi shanti se ek array par for loop lagake dusre arr me push back karna


//! Pair me hamesha .first and .second hi chalta

//! Sorting Weird Shit

//sorting in vector and sorting in array are 2 diff things
sort(v.begin(),v.end());
sort(arr+0,arr+n);



//1.sort in descending order

so u need to use cmp function here and a > b true kardia to desc me hojaega a> b false kiya to desc me ho jaega
concept : ki simply vector <int> v so andar wale ko bhejo "int a" and "int b"


ek imp chiz ye he ki if(a<b){return false} meaning he [2,3] so a=2 and b=3 (2<3){return false;}=> return false matlab swapping hogi so [2,3] ki swapping matlab [3,2] so bas itna yaad rakho ki a is the first one, b is the second one, and tru aaye to chod do and false aaye to swap kardo bas



int cmp (int a,int b){
    if(a>b){return true;}
    else{return false;}
}

int main()
{
    vector <int> v ={5,4,3,2} ;   
    sort(v.begin(),v.end(),cmp);
}



//2.sorting a vector containing pair <int,int> in it in asc order acc to first element of the pair 
concept : ki simply vector <pair<int,int>> v so andar wale ko bhejo "pair<int,int>a" and "pair<int,int>b"
int cmp(pair <int,int> a,pair <int,int> b){
    if(b.first > a.first){return true;}
    else{return false;}
}


int main(){
    vector <pair<int,int>> v ;
    v.push_back({9,2});
    v.push_back({3,4});
    
    sort(v.begin(),v.end(),cmp);}


//3.sorting a 2d array based on the first values of each array
    concept : ki simply vector <vector <int>> v so andar wale ko bhejo "vector<int>a" and "vector <int>b"

int cmp (vector <int>a,vector <int> b){
    if(a[0]>b[0]){return true;}
    else{return false;}
}

int main()
{
    vector <vector <int>> v ={{1,2},{0,3},{3,5}};
    
    sort(v.begin(),v.end(),cmp);
    

}

//! STRING


convert integer to a string
int x=10 ==>> string s=to_string(x) karoge to s="10" aa jaega

stoi ==> converts string to integer
int x=stoi(s1);


remember to_string ka opposite stoi he 



string s="ABC"

s.clear() will remove all the elements
s.erase(s.begin()+0) will clear the starting element
s.erase (s.begin+0,s.begin +2);

so pushback and popback dono kaam karte he jo vectors me bhi kaam karte the and these 2 stl can be used as a replacement for stack and s="" me hi kaam hojaega instead of taking an empty stack
s.push_back('D'); -> ABCD
s.pop_back(); -> ABC

//SUBSTR VIMP
s.substr (i,length)

//!VIMP PART OF STRING
whenever a no is given in a string "1234" s[0] ya s[1] wont work as they will give '1' and not 1

string s="1234";
int x=stoi(s);

//so x me integer value aa jaegi

warna remember s[i]-'0' karke hi use karna s[i] is //!danger 
ya fir stoi laga lena stoi = string to integer


//! HEAPS
max heap : priority_queue<int> maxh;
min heap : priority_queue<int,vector<int>,greater<int>> minh;   (IVG)


