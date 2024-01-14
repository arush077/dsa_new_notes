//! ye to book me kiya hoga 

no of paths to reach from 0,0 to destination use dp on this striclty

distance from one to another ya fir convert 0 to 1 ya fir no of connected components me graphs lagana 
but no of possible paths from src to dest me DP laga dena

https://leetcode.com/problems/unique-paths/submissions/

//no of possible paths from 0,0 to n-1,m-1 is simply your count template wala dp
//isme ditching tab hogi when (return right+down) he to ditch tab kar paoge when both are 0 so 0 possible path ayega so initialize right=0 and down=0 



 int dpf(int i,int j,int n,int m){

    if(i==n-1 && j==m-1){return 1;}

    int right=0;
    int down=0;

    if(j+1<m){
     right=dpf(i,j+1,n,m,dp);}

     if(i+1<n){
     down= dpf(i+1,j,n,m,dp);}

    return right+down;

    }


    int uniquePaths(int m, int n) {
        return dpf(0,0,m,n);
    }