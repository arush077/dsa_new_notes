https://leetcode.com/problems/perfect-squares/
 


 
 int f(int n,vector<int> &dp){


        //concept
        //ki saari possibilities leni he islie dp
        //12 
        //so take 1|| take 2 || take 3 || take 4 
        //  12-1^2 || 12-2^2 || 12-3^2 || 12-4^2
        //   11    ||   8    ||   3    ||   -4(not allowed)
        // in saare calls me se sabse min jisme lagega wo ans hoga mera simply so use a mini variable inside of the looping
        // jab 0 ayega to 0 return karna as min no of perfect squares to resolve 0 is 0 
        // also count nikalna he so 1 + f() hoga



        if(n==0){return 0;}

        if(dp[n]!=-1){return dp[n];}

        int mini=+1e9;
        for(int i=1;i<=n;i++){
            if(pow(i,2)<=n){
                int call=1+f(n-pow(i,2),dp);
                mini=min(mini,call);
            }
            else{break;}
        }

        return dp[n]=mini;
    }



    int numSquares(int n) {
        vector<int> dp(n+1,-1);
        return f(n,dp);
    }