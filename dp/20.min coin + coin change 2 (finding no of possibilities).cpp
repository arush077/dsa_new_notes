



//! sum==0 he to no of possibilities (think of it as a new case )




int coiner(int index, int sum, vector<int>& coins) {


  if (sum == 0) {
        return 1;
    } 

    if(index==0){
        if(sum%coins[index]==0){return 1;}
        else{
            return 0;
        }
    }

    int take=0;
    if(sum-coins[index]>=0){take = coiner(index, sum - coins[index], coins);}
    int nottake = coiner(index - 1, sum, coins);

    return take + nottake;
}




    int change(int amount, vector<int>& coins) {
        return coiner(coins.size()-1,amount,coins);
    }



//! Memoization

    int coiner(int index, int sum, vector<int>& coins,vector <vector <int>> &dp) {

  if (sum == 0) {
        return 1;
    }

    if(index==0){
        if(sum%coins[index]==0){return 1;}
        else{
            return 0;
        }
    }

    if(dp[index][sum]!=-1){return dp[index][sum];}

    int take=0;
    if(sum-coins[index]>=0){take = coiner(index, sum - coins[index], coins,dp);}
    int nottake = coiner(index - 1, sum, coins,dp);

    return dp[index][sum]=take + nottake;
}




//!Bottom Up
int change(int amount, vector<int>& coins) {

        int n=coins.size();
        vector <vector <int>> dp(n,vector <int>(amount+1,0));


        for(int index=0;index<n;index++){
            for(int sum=0;sum<=amount;sum++){
                 if (sum == 0) {
                    dp[index][sum]=1;
                }
                                                                                         //! Base cases ko alag double for loop me hi daalna warna bet hogi
                if(index==0){
                    if(sum%coins[index]==0){dp[index][sum]=1;}
                    else{
                        dp[index][sum]=0;
                    }
                }

            }
        }


        for(int index=1;index<n;index++){                                                //! Base case me sum==0 and index==0 se nahi karenge start as base case me wo already index==0 and sum==0 ko le liya he,, loge to bt hogi
            for(int sum=1;sum<=amount;sum++){
                int take=0;
                if(sum-coins[index]>=0){take = dp[index][sum-coins[index]];}
                int nottake = dp[index - 1][sum];

                dp[index][sum]=take + nottake;

            }
        }


        return dp[n-1][amount];
    } 