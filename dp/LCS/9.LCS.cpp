https://leetcode.com/problems/longest-common-subsequence/description/
   
LCS(LONGEST COMMON SUBSEQUENCE)   
// longest
// common
// subseq

//!LCS APPLICATION
1.Jabhi 2 strings given honge to 
2.Palindrome walo me LCS(s1,s2) kardo
3.No of insertions in a string wagera me



    int lcs(int i,int j,string a,string b){
        if(i==a.length() || j==b.length()){return 0;}

        if(a[i] == b[j]){
            return 1 + lcs(i+1,j+1,a,b);
        }

        return max( lcs(i+1,j,a,b) , lcs(i,j+1,a,b) );
    }

    int longestCommonSubsequence(string text1, string text2) {
        return lcs(0,0,text1,text2);
    }



    //! TOP DOWN
    int lcs(int i,int j,string a,string b,vector<vector<int>> &dp){
        if(i==a.length() || j==b.length()){return 0;}

        if(dp[i][j]!=-1){return dp[i][j];}

        if(a[i] == b[j]){
            return dp[i][j] = 1 + lcs(i+1,j+1,a,b,dp);
        }

        return dp[i][j] = max( lcs(i+1,j,a,b,dp) , lcs(i,j+1,a,b,dp) );
    }

    int longestCommonSubsequence(string text1, string text2) {
        //i is going from 0 to a.length()-1
        //j is going from 0 to b.length()-1

        // i==a.length() and j==b.length() are base cases

        vector<vector<int>> dp(text1.length(),vector<int>(text2.length(),-1));
        return lcs(0,0,text1,text2,dp);
    }




    //! BOTTOM UP
    int lcs(int i,int j,string a,string b,vector<vector<int>> &dp){
        if(i==a.length() || j==b.length()){return 0;}

        if(dp[i][j]!=-1){return dp[i][j];}

        if(a[i] == b[j]){
            return dp[i][j] = 1 + lcs(i+1,j+1,a,b,dp);
        }

        return dp[i][j] = max( lcs(i+1,j,a,b,dp) , lcs(i,j+1,a,b,dp) );
    }

    int longestCommonSubsequence(string text1, string text2) {
        //i is going from 0 to a.length()-1
        //j is going from 0 to b.length()-1

        // i==a.length() and j==b.length() are base cases

        vector<vector<int>> dp(text1.length()+1,vector<int>(text2.length()+1,0));
        // i==n and j==m ka to already equal to 0 he as while vector initialization only everything is filled with 0

        int n = text1.length();
        int m = text2.length();
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(text1[i] == text2[j]){
                    dp[i][j] = 1 + dp[i+1][j+1];
                }
                else{dp[i][j] = max( dp[i+1][j] , dp[i][j+1] );}
            }
        }


        return dp[0][0];
    }



TC : 
// i and j are the iterators of dp

// recursion : O(2^min(m, n))
// no idea how maybe since it has 2 options i,j+1 and i+1,j and will stop as soon as i or j hit the last element so min(i,j)
// SC = auxillary stack space = O(min(m,n))


// top down : O(m*n)

// bottom up : O(m*n)