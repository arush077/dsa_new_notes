//! Longest common Palindromic Subsequence
https://leetcode.com/problems/longest-palindromic-subsequence/description/


//! Subsequence me Longest ---> LCS ----> LCS ke lie to 2 strings ke beeech me hona chahiye
//! LCS(s1,s1 ka reversed) ----> LCS TABULATED RATTLO



//! RECURSION
   int f(int i,int j,string s1,string s2,vector <vector<int>> &dp){
        if(i<0 || j<0){return 0;}
        if(dp[i][j]!=-1){return dp[i][j];}
        if(s1[i]==s2[j]){return 1+f(i-1,j-1,s1,s2,dp);}
        else{return dp[i][j]=max(f(i-1,j,s1,s2,dp),f(i,j-1,s1,s2,dp));}
    }



    int longestPalindromeSubseq(string s) {
        string s1=s;
        reverse(s.begin(),s.end());
        string s2=s;
        vector <vector<int>> dp(s1.length(),vector<int>(s2.length(),-1));

        return f(s1.length()-1,s2.length()-1,s1,s2,dp);

    }
   


D:\dsa_notes\dp\11.LCSUBST.drawio

85





//! MEMOIZE

   int f(int i,int j,string s1,string s2,vector <vector<int>> &dp){
        if(i<0 || j<0){return 0;}
        if(dp[i][j]!=-1){return dp[i][j];}
        if(s1[i]==s2[j]){return 1+f(i-1,j-1,s1,s2,dp);}
        else{return dp[i][j]=max(f(i-1,j,s1,s2,dp),f(i,j-1,s1,s2,dp));}
    }



    int longestPalindromeSubseq(string s) {
        string s1=s;
        reverse(s.begin(),s.end());
        string s2=s;
        vector <vector<int>> dp(s1.length(),vector<int>(s2.length(),-1));

        return f(s1.length()-1,s2.length()-1,s1,s2,dp);

    }




    //! BOTTOM UP ME SHIFTED INDEXING LAGAYI
    //! i=0 to s.length() tak chalao and s[i] ke badle s[i-1] access karo
    //! last me dp[n-1][m-1] ke badle dp[n][m]

    

     int longestPalindromeSubseq(string s) {
        string s1=s;
        reverse(s.begin(),s.end());
        string s2=s;
        vector <vector<int>> dp(s1.length()+1,vector<int>(s2.length()+1,0));   

        // if(i<0 || j<0){return 0;}
        // if(dp[i][j]!=-1){return dp[i][j];}
        // if(s1[i]==s2[j]){return 1+f(i-1,j-1,s1,s2,dp);}
        // else{return dp[i][j]=max(f(i-1,j,s1,s2,dp),f(i,j-1,s1,s2,dp));}

        for(int i=1;i<=s1.length();i++){
            for(int j=1;j<=s2.length();j++){
        if(s1[i-1]==s2[j-1]){dp[i][j]=1+dp[i-1][j-1];}
        else{dp[i][j]=max(dp[i-1][j],dp[i][j-1]);}
        }
        }




        return dp[s1.length()][s2.length()];

    }