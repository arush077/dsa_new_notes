//! LIS (Longest Increasing Subsequence)
https://leetcode.com/problems/longest-increasing-subsequence/



//! ye niche wale code me pichla ko tumne as a value pass kiya so pichla could be arr[0] arr[1] arr[2] ... so isko memoize karna hard hoga
//! rather store pichla as indexing
int f(int i,int pichla,vector <int> arr){
        if(i==n){return 0;}
        int take=-1e9;
        if(pichla<arr[i] || pichla==-1){
            take=1+f(i+1,arr[i],arr); 
        }
        int nottake=0+f(i+1,pichla,arr);

        return max(take,nottake);
    }


    int lengthOfLIS(vector<int>& nums) {
        return f(0,-1,nums);
    }


    //!Pichla as indexing and not as value would run up from -1 to n-1
    //! initially u send pichla=-1 as last element ka pichla to koi nahi hota he 

    int f(int i,int pichla,vector <int> arr){
        if(i==n){return 0;}
        int take=-1e9;
        if(pichla==-1 || arr[pichla]<arr[i]){
            take=1+f(i+1,i,arr);
        }
        
        int nottake=0+f(i+1,pichla,arr);

        return max(take,nottake);

    }


    int lengthOfLIS(vector<int>& nums) {
        return f(0,-1,nums);
    }


//! SHIFTING ORIGIN CONCEPT IN LIS
//! CONCEPT : ONLY DP WALO ME CHANGES KARO p--> p+1 karo bas aur kahi bhi changes nahi karna
//! MEMOIZATION : since pichla=-1 to n-1 
//!so dp[-1] to allowed nahi hoga 
pichla=   -1 0 1 2 ... n-1  so box me allowed nahi he dp[pichla] will give wrong ans
pichla+1=  0 1 2 3 ... n    so can be allowed in the box dp[pichla + 1] but the size must be n+1 to get last index as n
so n+1 states 
and indexing ke n states i=n-1 ... 0
dp[n][n+1]

    int f(int i,int pichla,vector <int> arr,vector <vector <int>> &dp){
        if(i==n){return 0;}
        int take=-1e9;

        if(dp[i][pichla+1]!=-1){return dp[i][pichla+1]}

        if(pichla==-1 || arr[pichla]<arr[i]){
            take=1+f(i+1,i,arr,dp);
        }
        int nottake=0+f(i+1,pichla,arr,dp);

        return dp[i][pichla+1]=max(take,nottake);

    }


    int lengthOfLIS(vector<int>& nums) {
        vector <vector <int>> &dp(n,vector <int>(n+1,-1));
        return f(0,-1,nums,dp);
    }


//! LIS KA TABULATION IS A BIT HECTIC
//! Only remember one thing jaha bhi function ko dp me badal rahe ho wala dp[][yaha + 1 kardena
//! Also additional ki dp ka size index ke lie n+1 karna warna runtime marega because when u convert fn to dp table tab kabhi kabhar f(i+1) tha to dp[i+1] hoga so u need to take care ki i+1 aaya he to dp ki size ek se badi karni hogi tabhi i+1 fit hogi and agar f(i-1) he to dp[i-1] matlab i=0 pe dp[-1] point karri hogi so shifting of indexes lagani hogi
//! also p will run not from n-1 to -1 but from i-1 to 0 as p is essentialy pichla or must stay behind i 


int lengthOfLIS(vector<int>& nums) {

        // if(dp[i][pichla+1]!=-1){return dp[i][pichla+1]}

        vector <vector <int>> &dp(n+1,vector <int>(n+1,0));  //! n+1 kardiya index wale ko

        //BC as such kuch khas nahi he as return 0 hi kar raha he waha bhi

        for(int i=n-1;i>=0;i--){
            for(int p= i-1;p>=-1;p--){                           //! Pichla starts from n-1
                   if(pichla==-1 || arr[pichla]<arr[i]){
                   take=1+dp[i+1][i + 1 ] ; }                    //! fn ko dp me bala to +1 aad kiya 2nd index me
                   int nottake=0+dp[i+1][pichla+1] ;             //! fn ko dp me bala to +1 aad kiya 2nd index me

                    dp[i][pichla+1]=max(take,nottake);
        }
        }



        return dp[0][-1 + 1];    //! jaha bhi dp banare ho waha 2nd index me +1 karna hi hoga



    }
