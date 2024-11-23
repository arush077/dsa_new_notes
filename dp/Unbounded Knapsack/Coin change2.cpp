// COIN CHANGE2
// here you need to count the number of possibilities where you can sum up the coins upto that amount
//! in counting type dp qns
//1. you return 1 or 0 on reaching the end
//2. you return take + nottake 
https://leetcode.com/problems/coin-change-ii/

//!CONCEPT
// you will have conditions on i and amount (//! because they are the 2 things which are varying)
// condition on i :agar i has reached the end then amount dekho, if amount is 0 then you need 0 coins, if amount is still not 0 then do not take this
// condition on amount : if amount == 0 then return 0

  
    int f(int i,int amount,vector<int>&coins){
        if(amount==0){
            //if amount==0 then you can take this combination
            return 1;}

        if(i==coins.size()){
            //reached the end 
            //check the amount
            if(amount==0){
                //this means we have found a possible answer
                return 1;
            }
            else{
                //you have reached the end but the amount is not 0 so yo u dont take this combination
                return 0;
            }
        }
        int take = 0;
        if(amount>=coins[i]){
        take = f(i,amount-coins[i],coins);}  //since this is unbounded knapsack so dont move ahead after taking
        int nottake = f(i+1,amount,coins);
        return take + nottake;
    }

    int change(int amount, vector<int>& coins) {
        // i ---> 0-----n-1  as n wala is in the base case
        // amount ---> amount------0 so you will need amount+1
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        return f(0,amount,coins);
    }