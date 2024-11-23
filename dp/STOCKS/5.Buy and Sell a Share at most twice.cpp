https://www.geeksforgeeks.org/problems/buy-and-sell-a-share-at-most-twice/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab


// simple
// i me iterate over array elements
// buy variable to check if you can buy this element or not 
// {
// if buy=1 then u can buy or notbuy
// if buy=0 then u can sell or notsell
// }

// then count variable=2 se start hoga and when u complete a process ie buy+sell then decreament that by 1
// so sell hone ke baad decreament it by 1

 int f(int i,int b_count,int b_now,vector<int>&price,vector<vector<vector<int>>> &dp){
            if(i==price.size()){return 0;}
            
            if(b_count==0){return 0;}
            if(dp[i][b_count][b_now]!=-1){return dp[i][b_count][b_now];}  //put this after the base cases only
            if(b_now){
                //b_now is equal to 1 matlab u are not holding on to anything
                //so buy or not buy 
                int buy=f(i+1,b_count,0,price,dp)-price[i];
                int notbuy=f(i+1,b_count,b_now,price,dp)-0;
                return dp[i][b_count][b_now]=max(buy,notbuy);
                
            }
            
            else{
                //b_now=0 u can't buy now u have to sell 
                //so sell or not sell
                int sell=f(i+1,b_count-1,1,price,dp)+price[i];
                int notsell=f(i+1,b_count,0,price,dp)-0;
                return dp[i][b_count][b_now]=max(sell,notsell);
                
            }
        }
        
        
        
        int maxProfit(vector<int>&price){
            //Write your code here..
            //i from 0 to n-1
            //b_count from 2,1,0
            //b_now from 0 and 1
            int n=price.size();
            vector<vector<vector<int>>> dp(n,vector<vector<int>>(3,vector<int>(2,-1)));
            return f(0,2,1,price,dp);
        }