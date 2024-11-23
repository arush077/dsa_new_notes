https://www.codingninjas.com/studio/problems/stocks-are-profitable_893405?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos
//! BEST TIME TO BUY AND SELL
[7,1,5,3,6,4]
buy at 1 and sell at 6 profit=5 which has to be maximized
//this is not just max-min elements of the array ka answer agar wo karna hota to fir 7-1=6 aata but constraint: buy then sell (lower selection then higher selection)

//! so max diff between 2 elements of array nikalna hoga : Constraint piche wala (buy) kam price pe hoga and aage wala(sell) more price pe hoga


//for the buy variable simply u are iterating from left to right so minimum value of array capture karte jaao


// sell ko iterate karo , profit ko maximize karo , buy ko minimize karo

    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int buy = prices[0];
        int profit = 0;

        for(int sell = 1;sell<n;sell++){
            profit = max(profit, prices[sell]-buy);
            buy = min(buy,prices[sell]);
        }

        return profit;

    }

//! REMEMBER THIS BY D MAXI MINI AND ITERATE OVER SELL FROM 1 TO N-1 //not from 0 but from 1 se selling start karna


alternate is make a max array from the right as u want a big element on the right and min array from the left as u want min from the left








