//! Isme galti se bhi LCS(A,B) and LCS(B,C) and LCS(A,C) karke minimum lene wali galti mat karna

instead 2 strings wale ko hi extend karwana to 3d dp me
simple saa he 


vector <vector <vector <int>>> dp(A.size()+1,vector <vector<int>>(B.size()+1,vector <int>(C.size()+1,0)));
  vector <vector <vector <int>>> dp(A.size()+1,vector <vector<int>>(B.size()+1,vector <int>(C.size()+1,0)));
    
     n1=A.length();n2=B.length();n3=C.length();
    
    
    for(int i=1;i<n1+1;i++){
    for(int j=1;j<n2+1;j++){
    for(int k=1;k<n3+1;k++){

            if(A[i-1]==B[j-1]  && B[j-1]==C[k-1] ){dp[i][j][k]=1+dp[i-1][j-1][k-1];}

            else{

            // dp[i][j][k]= max(dp[i-1][j][k],dp[i][j-1][k],dp[i][j][k-1]); tino ka max ek baar me to nahi ayega na
               
               dp[i][j][k]= max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));

            }
        }
    }
}


return dp[n1][n2][n3];

    