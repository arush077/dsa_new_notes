









//! MEMOIZED code recursive code book me dekh lena
    int profit(int i,int buy,vector <int> prices,vector <vector <int>>&dp){
        if(i==prices.size()){return 0;}

        if(dp[i][buy]!=-1){return dp[i][buy];}

        if(buy){
            // int b= -prices[i]+profit(i+1,0,prices,dp);
            // int notb= 0+ profit(i+1,1,prices,dp);
            return dp[i][buy]=max(-prices[i]+profit(i+1,0,prices,dp),0+ profit(i+1,1,prices,dp));
        }

        else{
            // int s=+prices[i]+profit(i+1,1,prices,dp);
            // int ns=0+profit(i+1,0,prices,dp);
            return dp[i][buy]=max(+prices[i]+profit(i+1,1,prices,dp),0+profit(i+1,0,prices,dp));
        }

    }



    int maxProfit(vector<int>& prices) {
        vector <vector <int>> dp(prices.size(),vector <int>(2,-1));
        return profit(0,1,prices,dp);
    }