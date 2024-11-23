//!memoized code
class Solution {
public:

    int profit(int i,int buy,int count,vector <int> prices,vector <vector <vector <int>>> &dp){
        if(count==0){return 0;}
        if(i==prices.size()){return 0;}

        if(dp[i][buy][count]!=-1){return dp[i][buy][count];}

        if(buy && count){
            return dp[i][buy][count]=max(-prices[i]+profit(i+1,0,count,prices,dp),0+profit(i+1,1,count,prices,dp));
        }

        else{
            if(count==0){
                //aur buy nahi kar sakte so sell ke baad buy ka option mat rakna
                return dp[i][buy][count]=max(+prices[i]+profit(i+1,0,count,prices,dp),profit(i+1,0,count,prices,dp));
            }

            else{
                //yaha pe buy kar sakte ho after selling
                return dp[i][buy][count]=max(+prices[i]+profit(i+1,1,count-1,prices,dp),profit(i+1,0,count,prices,dp));
            }



        }
    }


    int maxProfit(vector<int>& prices) {
        vector <vector <vector <int>>> dp(prices.size(),vector <vector<int>>(2,vector <int>(3,-1)));
        return profit(0,1,2,prices,dp);



//!tabulated code
class Solution {
public:

    int profit(int i,int buy,int count,vector <int> prices,vector <vector <vector <int>>> &dp){
        if(count==0){return 0;}
        if(i==prices.size()){return 0;}

        if(dp[i][buy][count]!=-1){return dp[i][buy][count];}

        if(buy && count){
            return dp[i][buy][count]=max(-prices[i]+profit(i+1,0,count,prices,dp),0+profit(i+1,1,count,prices,dp));
        }

        else{
            if(count==0){
                //aur buy nahi kar sakte so sell ke baad buy ka option mat rakna
                return dp[i][buy][count]=max(+prices[i]+profit(i+1,0,count,prices,dp),profit(i+1,0,count,prices,dp));
            }

            else{
                //yaha pe buy kar sakte ho after selling
                return dp[i][buy][count]=max(+prices[i]+profit(i+1,1,count-1,prices,dp),profit(i+1,0,count,prices,dp));
            }



        }
    }


    int maxProfit(vector<int>& prices) {
        vector <vector <vector <int>>> dp(prices.size()+1,vector <vector<int>>(2,vector <int>(3,0)));
        // return profit(0,1,2,prices,dp);
        
        //count==0 matlab i and buy variate karo but in reverse direction
        //i=0 to n jaara recursion me to n-1 to 0 jaega tabulated me 
        //buy=1 -> 0 jaara so tabulated me 0 to 1 jaega
        int n=prices.size();
        for(int i=n-1;i>=0;i--){
            for(int buy=1;buy>=0;buy--){
                dp[i][buy][0]=0;
            }
        }

        //i==n he to buy and count ko vary karo
        for(int buy=1;buy>=0;buy--){
            for(int count=0;count<=2;count++){
                dp[n][buy][count]=0;
            }
        }

        for(int i=n-1;i>=0;i--){
            for(int buy=0;buy<=1;buy++){
            for(int count=1;count<=2;count++){

        // if(dp[i][buy][count]!=-1){return dp[i][buy][count];}

        if(buy && count){
              dp[i][buy][count]=max(-prices[i]+dp[i+1][0][count],0+dp[i+1][1][count]);
        }

        else{
            if(count==0){
                //aur buy nahi kar sakte so sell ke baad buy ka option mat rakna
                dp[i][buy][count]=max(+prices[i]+dp[i+1][0][count],dp[i+1][0][count]);
            }

            else{
                //yaha pe buy kar sakte ho after selling
                dp[i][buy][count]=max(+prices[i]+dp[i+1][1][count-1],dp[i+1][0][count]);
            }



        }


            }
        }
        }

        return dp[0][1][2];




    }
};
    }
};