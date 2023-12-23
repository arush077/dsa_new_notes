https://leetcode.com/problems/wildcard-matching/
//drawio dekhlena 
//v similar to lcs because do strings diye the just like in lcs


bool isMatch(string s, string p) {
    string s1=s;
    string s2=p;

    int n=s2.length();
    int m=s1.length();
    
    vector<vector<bool>> dp(n+1,vector<bool>(m+1,0));
    

    //endmost element ko true kardiya
    dp[n][m]=true;
    

    //last row me sabko false
    for(int j=0;j<m;j++){
        dp[n][j]=false;
    }
    

    //last column me sabko false except for when * aaye to niche aur right me dekna and since you cant see on right just see down 
    for(int i=n-1;i>=0;i--){
        if(s2[i]=='*'){dp[i][m]=dp[i+1][m];}
        else{
        dp[i][m]=false;}
    }
    
    
    //last se first ki taraf bhar rahe he hum 
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
         
         
        if(s1[j]==s2[i]){dp[i][j]=dp[i+1][j+1];}  //ye bhi diagonal hi chalega
        else if(s2[i]=='?'){dp[i][j]=dp[i+1][j+1];} //simply diagonal me dekna
             
        else if(s2[i]=='*'){
            
            //right aur down me dekna 
            
            dp[i][j]=dp[i+1][j] || dp[i][j+1];
            // for(int x=j;x<=m;x++){
            //     if(dp[i+1][x]){
            //         dp[i][j]=true;
            //         break;
            //     }
        }
             
         
         else{
         dp[i][j]=false;
         }
         
         
         
         
            
        }
    }
    
  

    return dp[0][0];