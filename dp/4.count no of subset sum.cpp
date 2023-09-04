//! same subset sum wala code likna but just that l+r ki value kabhi bohot badi ho sakti he 
//! so (l+r)%mod kardena

//! standard template for count--->

f(i){

if(cndn satisfy){return 1;}
if(cndn notsatisfy){return 0;}

int take=f(i-1)
int nottake=f(i)

return (take+nottake);
}


//! CODE-->

//! same tiin condition pehle sum==0 then sum<0 then i<0


#define mod 1000000007;

int rec(int i,int sum,vector <int> arr,vector <vector <int>> &dp){

if(sum==0){return 1;}
if(sum<0){return 0;}
if(i<0){return 0;}

if(dp[i][sum]!=-1){return dp[i][sum];}

int l=rec(i-1,sum-arr[i],arr,dp);
int r=rec(i-1,sum,arr,dp);
int add=(l+r)%mod;
return dp[i][sum]=add;



}