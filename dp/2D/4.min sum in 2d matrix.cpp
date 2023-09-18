    https://leetcode.com/problems/minimum-path-sum/submissions/

    //! Simple do base condition ek to chek karne wala ki out of bounds and dusra destination ke lie
    
    
    
    int summer(int i,int j,int m,int n,vector<vector<int>>& arr,vector <vector <int>> &dp){

        if(i>=m || i<0 || j>=n || j<0){return +1e9;}

        if(i==m-1 && j==n-1){
            return arr[i][j];
        }

        if(dp[i][j]!=-1){return dp[i][j];}


        // int d=+1e9;                                  //! kyu yaha pe initially ese initialize nahi kiya simply beacause  d= arr[i][j] +... to arr ke and out of bounds jaa hi nahi sakta kabhi bhi as uska to base case me dekh liya so kahi pe dikkat hi nahi ayegi so no need to already set it to a ditching condition
        // int r=+1e9;

        int d= arr[i][j] + summer(i+1,j,m,n,arr,dp);

        int r=arr[i][j] + summer(i,j+1,m,n,arr,dp);

        return dp[i][j]=min(d,r);

    }




    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector <vector <int>> dp(m,vector <int>(n,-1));
        return summer(0,0,grid.size(),grid[0].size(),grid,dp);
    }