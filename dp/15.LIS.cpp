//! LIS (Longest Increasing Subsequence)
https://leetcode.com/problems/longest-increasing-subsequence/



//! ye niche wale code me pichla ko tumne as a value pass kiya so pichla could be arr[0] arr[1] arr[2] ... so isko memoize karna hard hoga
//! rather store pichla as indexing
int f(int i,int pichla,vector <int> arr){
        if(i<0){return 0;}
        int take=-1e9;
        if(pichla>arr[i] || pichla==-1){
            take=1+f(i-1,arr[i],arr); 
        }
        int nottake=0+f(i-1,pichla,arr);

        return max(take,nottake);
    }


    int lengthOfLIS(vector<int>& nums) {
        return f(nums.size()-1,-1,nums);
    }


    //!Pichla as indexing and not as value would run up from -1 to n-1
    //! initially u send pichla=-1 as last element ka pichla to koi nahi hota he 

    int f(int i,int pichla,vector <int> arr){
        if(i<0){return 0;}
        int take=-1e9;
        if(pichla==-1 || arr[pichla]>arr[i]){
            take=1+f(i-1,i,arr);
        }
        
        int nottake=0+f(i-1,pichla,arr);

        return max(take,nottake);

    }


    int lengthOfLIS(vector<int>& nums) {
        return f(nums.size()-1,-1,nums);
    }


//! MEMOIZATION : since pichla=-1 to n-1 
//!so dp[-1] to allowed nahi hoga 
pichla=   -1 0 1 2 ... n-1  so box me allowed nahi he dp[pichla] will give wrong ans
pichla+1=  0 1 2 3 ... n    so can be allowed in the box dp[pichla + 1] but the size must be n+1 to get last index as n
so n+1 states 
and indexing ke n states i=n-1 ... 0
dp[n][n+1]

    int f(int i,int pichla,vector <int> arr,vector <vector <int>> &dp){
        if(i<0){return 0;}
        int take=-1e9;

        if(dp[i][pichla+1]!=-1){return dp[i][pichla+1]}

        if(pichla==-1 || arr[pichla]>arr[i]){
            take=1+f(i-1,i,arr,dp);
        }
        int nottake=0+f(i-1,pichla,arr,dp);

        return dp[i][pichla+1]=max(take,nottake);

    }


    int lengthOfLIS(vector<int>& nums) {
        vector <vector <int>> &dp(n,vector <int>(n+1,-1));
        return f(nums.size()-1,-1,nums,dp);
    }


