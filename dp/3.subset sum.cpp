https://www.codingninjas.com/studio/problems/subset-sum-equal-to-k_1550954?leftPanelTab=1&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos


#include <bits/stdc++.h> 
//! without using dp and recursion simply using maps and sets XXX
//! galat he ye as this was for subarray/ substring and not for subset sum dumbass


bool subsetSumToK(int n, int k, vector<int> &arr) {
    unordered_set <int> s;
    int presum=0;
    for(int i=0;i<n;i++){
        presum=presum+arr[i];
        cout<<presum<<" "<<presum-k<<endl;
        if(presum==k){return true;}
        else if(s.find(presum-k)!=s.end()){return true;}
        s.insert(presum);
    }

    return false;
}


//! subset ka qn he to 100% recursion + dp hi lagega
bool sumgenerator(int i,vector <int> &v,int sum,int k,vector <bool> &dp){

   bool rec(int i, int sum, vector<int>& arr, vector<vector<int>>& dp) {
        if (sum == 0) {
            return true;
        }                                                                             //! yaad rakna base conditions pehle to sum==0 hua to hojaegfa kaam

        

        if(sum<0){return false;}                                                      //! agar sum <0 hua to return false


        if (i < 0) {                                                                  //! agar sum=0 ya negative nahi hua and i piche chala gaya array ke matlab no element left and sum is still >=0 then to fir false return karna
            return false;
        }




        if (dp[i][sum] != -1) {                                                      //! alse here sum varies from 0 to s so s+1 length ka lena and i varies from 0 to n-1 so n length ka lena
            return dp[i][sum];
        }

        bool take = rec(i - 1, sum - arr[i], arr, dp);
        bool nottake = rec(i - 1, sum, arr, dp);

        return dp[i][sum] = (take || nottake);
    }



//! since both sum and the i value are changing so memoize 2d array me hoga
//! i->n-1 to 0 (n) ||  k-> k to 0 (k+1)
//! dp[n][k+1];
//! and -1 hi bharna not false as -1 is indication ki this subproblem has not been reached
//! tabulation me 2d dp ke andar true ya false bharna




//! Aditya verma method alag he 
wo knapsack se solve karega 
knapsack me check karna hota he ki arr[n-1] < = k(sum) he agar haa to is arr[n-1] ko lo ya na lo (or karke)
                                else arr[n-1] > k(sum) ise naa lo
and aditya verma sidhe tabulate karta he 








