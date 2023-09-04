//!knapsack
f(i,W){
    if(i==0){
        if(wt[0]>W){return 0;}                        //!cant take
        else if (wt[0]<W){return val[i];}             //!can take so return the value
    }                                                 //! VIMP LOGIC --> subset sum wale qn ki tarah mat dekhio
                                                      //!subset sum me BC: if(sum==0){return 1 ;} if(sum<0){return 0;}
    int take=-1e9;                                    //! KNAPSACK me bag of W pura nahi bharna so W==0 nahi hua to bhi chalega!!!
    if(W-wt[i]>=0){                                   //! 1 2 W=4 so u can take 1 and 2 and this would still be a valid ans, even though the bag is not filled
    int take=f(i-1,W-wt[i])+ val[i];}                 //! so KNAPSACK ke bc me sirf if(i==0) ek element baccha hoga to sochna
    int nottake=f(i-1,W-wt[i])+0;

    return max(l,r);
}




//!knapsack memoize top down
f(i,W, &dp){
    if(i==0){
        if(wt[0]>W){return 0;}                        
        else if (wt[0]=<W){return val[i];}             
    }    

    if(dp[i][W]!=-1){return dp[i][W];}                                             
                                                      
    int take=-1e9;                                    
    if(W-wt[i]>=0){                                   
    int take=f(i-1,W-wt[i])+ val[i];}                 
    int nottake=f(i-1,W)+0;

    return dp[i][W]=max(l,r);
}


//! knapsack tabulation bottom up
//! auxillary stack space because of recursion ko hatane ke lie

f(i,W, &dp){
    // if(i==0){
    //     if(wt[0]>W){return 0;}                        
    //     else if (wt[0]=<W){return val[i];}             
    // }    

    vector <vector <int>> dp(wt.size(),vector <int>(W+1,0));    //! initialize with zeroes

    for(W=wt[0];W<=MW;W++){
        dp[0][W]=val[0];                                        //! BC likh diya (wt[0]=<W){return val[i];}  matlab jab W >=wt[0] ho tab se lekar MW tak i==0 par fill karna val[0]
    }                                                           //! if(wt[0]>W){return 0;} isko lene ka koi sense nahi as pehle se hi zeroes se initialize hua he 
   
   
   
    // if(dp[i][W]!=-1){return dp[i][W];}                                             
                                                      
    // int take=-1e9;                                    
    // if(W-wt[i]>=0){                                   
    // int take=f(i-1,W-wt[i])+ val[i];}                 
    // int nottake=f(i-1,W)+0;
    // return dp[i][W]=max(l,r);

    for(int i=1;i<wt.size();i++){
        for(int W=0;W<=MW;W++){
    // int take=-1e9;                                    
    // if(W-wt[i]>=0){                                   
    // int take=dp[i-1][W-wt[i]]}                 
    // int nottake=dp[i-1][W];
    // dp[i][W]=max(l,r);                                               //!same code copy paste sirf f(x,y) -> dp[x][y] and return hata dena and loops ke bahar khudka return karna
        }                                                               //! and is return me dp[max value of x][max val of y] dena
    }



    return dp[n-1][MW];
}
