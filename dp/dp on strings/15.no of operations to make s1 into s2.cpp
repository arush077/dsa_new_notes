https://leetcode.com/problems/edit-distance/


//!VIMP


int operations(int i,int j,string word1, string word2,int n,int m,vector<vector<int>> &dp){

        if(i==n  &&  j!=m){
            return m-j;
        }

        else if(j==m && i!=n){
            return n-i;
        }


        else if (j==m && i==n){
            return 0;
        }

        if(dp[i][j]!=-1){return dp[i][j];}

        if(i<n && j<m && word1[i]==word2[j]){return 0+operations(i+1,j+1,word1,word2,n,m,dp);}


        int deleter=1 +  operations(i,j+1,word1,word2,n,m,dp);
        
        int insert=1 +  operations(i+1,j,word1,word2,n,m,dp);
        
        int replace=1 + operations(i+1,j+1,word1,word2,n,m,dp);

        return dp[i][j]=min(deleter,min(insert,replace));

    }



    int minDistance(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();

        vector<vector<int>> dp(n,vector<int>(m,-1));

        return operations(0,0,word1,word2,n,m,dp);
    }