https://leetcode.com/problems/coin-change/


//!CONCEPT
//! take = 1+ f(i,W-wt[i])
//! nottake=0 + f(i-1,W)



//! u can always add additional conditions like if(index<0){return -1e9;} ya fir if(sum==0){return 0;} (think of base case as another case where array is given and we need to find min coins to get a 0 sum ie we need 0 coins lol)
//! But that index==0 and sum==0 is nescessary index==0 to explicity handle kiya he whereas sum<0 to if(sum-coins[index]>=0) {to hi call karo} 



//! One more conceptual qn is that ki index==0 pe hi kyu divisible he ya nahi check karna ???? no we are not only checking divisibility at index==0 but at all the elements its hidden behind the unbounded knapsack which allows u to take as many elements as u want from a particular element which is inderectly equal to divisibilty only



int coiner(int index,int sum,vector<int>& coins){

     if(index==0){
            if(sum%coins[0]==0){return sum/coins[0];}             //! wapas 0 par aakar analyze karre ho ki agar ek element he to kya kare?
            else if (sum%coins[0]!=0 || sum<coins[0] ){
                //! cancel the entire path as iss path par rehkar u can't generate the target sum
                return +1e9;}
     }

        int take=1e9;
        if(sum-coins[index]>=0){                             //!take ko initally not possible rakho and then condition daalkar possible karao
        take=coiner(index,sum-coins[index],coins)+1;}

        int nottake=coiner(index-1,sum,coins);

        return min(take,nottake);
        

    }

    int coinChange(vector<int>& coins, int amount) {
        if(coiner(coins.size()-1,amount,coins)>=1e9){return -1;}
        return coiner(coins.size()-1,amount,coins);
    }



//! memoized


    int coiner(int index,int sum,vector<int>& coins,vector <vector <int>> &dp){

        if(index==0){
            if(sum%coins[0]==0){return sum/coins[0];}
            else if (sum%coins[0]!=0 || sum<coins[0] ){return +1e9;}
        }


        if(dp[index][sum]!=-1){return dp[index][sum];}
        int take=1e9;

        if(sum-coins[index]>=0){ 
        take=coiner(index,sum-coins[index],coins,dp)+1;}
        int nottake=coiner(index-1,sum,coins,dp);


        return dp[index][sum]=min(take,nottake);


    }

    int coinChange(vector<int>& coins, int amount) {
        vector <vector <int>> dp(coins.size(),vector<int>(amount+1,-1));
        if(coiner(coins.size()-1,amount,coins,dp)>=1e9){return -1;}                          //!cancelled path must return a -1 and not 1e9 so if(it gives >=1e9){return -1;} 
        return coiner(coins.size()-1,amount,coins,dp);
    }



//! tabulated

 int coinChange(vector<int>& coins, int amount) {
        vector <vector <int>> dp(coins.size(),vector<int>(amount+1,0));   //! 0 se initialize in bottom up
        // if(coiner(coins.size()-1,amount,coins,dp)>=1e9){return -1;}
        // return coiner(coins.size()-1,amount,coins,dp);

        for(int sum=0;sum<=amount;sum++){
            if(sum%coins[0]==0){
                dp[0][sum]=sum/coins[0];
            }                                                                //! BC initialize kardo
            else{
                dp[0][sum]=+1e9;
            }
        }


        for(int i=1;i<coins.size();i++){
            for(int sum=0;sum<=amount;sum++){                                  //! for loop 
         int take=1e9;                                                          //! i==0 to BC me cover hogaya to i=1 se karo
                                                                                //! now full code of recursion/memoization copy paste
        if(sum-coins[i]>=0){ 
        take=dp[i][sum-coins[i]]+1;}                               
        int nottake=dp[i-1][sum];

        dp[i][sum]=min(take,nottake);                                            //! sirf return keyword hata dena while copy pasting

            }
        }

        if(dp[coins.size()-1][amount]>=1e9){return -1;}                           //! ye to memoization me bhi tha
        else{return dp[coins.size()-1][amount];}

    }