https://www.codingninjas.com/studio/problems/stocks-are-profitable_893405?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos
//! BEST TIME TO BUY AND SELL
[7,1,5,3,6,4]
buy at 1 and sell at 6 profit=5 which has to be maximized

//! so max diff between 2 elements of array nikalna hoga 
//! Constraint piche wala (buy) kam price pe hoga and aage wala(sell) more price pe hoga

// arr[sell]-arr[buy] = max
// given that sell>buy

//for the buy variable simply u are iterating from left to right so minimum value of array capture karte jaao


arr[sell] - arr[buy] =max diff

//! O(N) solution using looping                       
int maximumProfit(vector<int> &prices){ 
    
    int buy=prices[0];                                 //! buy ko initially set to arr[0] 
    int maxdiff=0;
    for(int sell=1;sell<prices.size();sell++){         //! sell ko traverse kiya 
        int diff=prices[sell]-buy;             
        maxdiff=max(maxdiff,diff);                     //! difference ko maximize kiya
        buy=min(buy,prices[sell]);                     //! buy ko minimize kiya
    }

return maxdiff;

//! REMEMBER THIS BY D MAXI MINI AND ITERATE OVER SELL FROM 1 TO N-1


alternate is make a max array from the right as u want a big element on the right and min array from the left as u want min from the left








