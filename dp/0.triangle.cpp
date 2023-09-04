#include <bits/stdc++.h>
using namespace std;

// int minimumpath(int i,int j,vector<vector<int>>& triangle){
// if(i==0){return triangle[i][j];}
// else if (i<0 || j<0 || j>i){return 1e9;}

// int call1=triangle[i][j]+minimumpath(i-1,j-1,triangle);            //is wale case me dekho bas 0,0 se 3,0 tak hi jaare ho but u want to go to 3,0 3,1 3,2 3,3 all of them jo ki mushkil he aur for loop lagana hoga
// int call2=triangle[i][j]+minimumpath(i-1,j,triangle);
// return min(call1,call2);

// }

// int minimumPathSum(vector<vector<int>>& triangle, int n){
// 	int x=minimumpath(3,0,triangle);
// 	return x;
// }


// //better ye he ki since ek starting point he 0,0 and bohot sare ending points he so go from 0,0 -----> 3,0  3,1  3,2  3,3
// //because hamesha jo bhi kam hote he usko as source le lo so here 0,0 se start hoga
// // see recursion tree in book 

int minimumpath(int i,int j,vector<vector<int>>& triangle){
if(i==triangle.size()-1){return triangle[i][j];}
// else if (i<0 || j<0 || j>i){return 1e9;}

int call1=triangle[i][j]+minimumpath(i+1,j,triangle);            
int call2=triangle[i][j]+minimumpath(i+1,j+1,triangle);
return min(call1,call2);

}

int main(){
    // vector<vector<int>> triangle;
    
	// int x=minimumpath(0,0,triangle);
	// cout<<x;
    
}