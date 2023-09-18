https://codeforces.com/contest/1867/problem/A

//! simple concept 
//! 2 arr a and b ke difference wala jo c array ayega usme distinct elements maximum hone chahiye
//! 2 arr ke difference me max distinct tab ayega jab ek increasing array ho and dusra decreasing ho

//! so for eg 2 5 1 1 3
//! sort it so 1 1 2 3 5 and then b = 5 4 3 2 1 dekho 100% elements will be distinct
//!so       b= 5 4 3 2 1 for the sorted a 
//! so b for the unsorted a will be b= 3 1 5 4 2

//! so u need to remember the index of where that element went after sorting 
concept: input vector with the indexes

    a= 2,0 , 5,1 , 1,2 , 1,3 , 3,4
sort a=1,2 , 1,3 , 2,0 , 3,4 , 5,1

//! so you haven't lost a touch of original indexing once you sorted it 
sort a=1,2 , 1,3 , 2,0 , 3,4 , 5,1
     b= 5  ,  4  ,  3  ,  2  ,  1

     so 5 must go to index 2 , 4 must go to index 3 , 3 must go to index 0 and so on

//! note : map se u cant do this as map wala similar elements me mess up kardega


//code

vector <pair <int,int>> a;
for(int i=0;i<n;i++){
    cin>> a[i].first;
    a[i].second=i;
}

sort(a.begin(),a.end());

for(int i=0;i<n;i++){
    b[arr[i].second] = n-i ;
}


//commit1
//commit2