https://leetcode.com/problems/longest-common-subsequence/description/
   
//! LCS KA TABULATED RATT LOO PLSSSS
LCS(LONGEST COMMON SUBSEQUENCE)   

//!LCS APPLICATION
1.Jabhi 2 strings given honge to 
2.Palindrome walo me LCS(s1,s2) kardo
3.No of insertions in a string wagera me



   //! RECURSION
   subber(i,j){
   
    if(i<0 || j<0){return 0;}

        int piche=0,ipiche=0,jpiche=0;
        if(s1[i]==s2[j]){                               //! i and j wale element equal ho to i-1 and j-1
            return 1+subber(i-1,j-1);
        }
        
        return max(subber(i-1,j),subber(i,j-1));       //! i and j equal naho to i-1,j ya for i,j-1
    }
    

    //! TABULATED
       

    vector <vector <int>> dp(s1.length()+1,vector <int>(s2.length()+1,0));     //!n+1 and m+1 size ka banana
    for(int i=1;i<=s1.length();i++){
        for(int j=1;j<=s2.length();j++){                                       //! DOUBLE FOR LOOP i=1 and j=1 se start karna kyuki andar s[i-1] s[j-1] use karna he
            if(s1[i-1]==s2[j-1]){dp[i][j]=1+dp[i-1][j-1];}                     //! agar equal ho to 1 + dp[i-1][j-1]
            else{dp[i][j]=max(dp[i-1][j],dp[i][j-1]);}                         //! agar not equal ho to max(dp[i-1][j],dp[i][j-1])
        }
    }

    return (s1.length()-dp[s1.length()][s2.length()]);                        //!dp[n][m] return karna as size n+1 and m+1 ka banae ho to maxm index n aur m hi honge               

    }