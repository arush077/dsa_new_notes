https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/description/
//! Min Insertions to Palindrome

//! Palindrome ke DP questions ---> 100% LCS Tabulated code se solve honge --> LCS TABULATED RATT LO

   int minInsertions(string s) {

        string s1=s;
        reverse(s.begin(),s.end());
        string s2=s;

    vector <vector <int>> dp(s1.length()+1,vector <int>(s2.length()+1,0));
    for(int i=0;i<=s1.length();i++){
        for(int j=0;j<=s2.length();j++){
            if(i==0 || j==0){dp[i][j]=0;}
            if(s1[i-1]==s2[j-1]){dp[i][j]=1+dp[i-1][j-1];}
            else{dp[i][j]=max(dp[i-1][j],dp[i][j-1]);}    
        }
    }

    return (s1.length()-dp[s1.length()][s2.length()]);

    }