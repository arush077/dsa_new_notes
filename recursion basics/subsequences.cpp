recursion for subsets
//! aage se piche
//! isme kuchbhi  max(left,rigth) ye sab nahi karna hota
f(i,j,sum){
    if(i<=0){return }

    int pick=f(i-1,sum+arr[i]);
    int notpick=f(i-1,sum-arr[i])
}

//!piche se aage
f(i,j,sum){
    if(i>=n){return }   //! recursive tree draw karke dekna kaha base case lena he 

    int take=f(i-1,sum+arr[i]);
    int nottake=f(i-1,sum-arr[i])
}



//! max profit
f(i,j){
    if(sum==0){return 1;}
    if(sum<0){return 0;}
    if(i<0){return 0; }   //! recursive tree draw karke dekna kaha base case lena he 

    int take=f(i-1,sum-arr[i])+ profit[i];
    int nottake=f(i-1,sum-arr[i])+0;

    return max(take,nottake);
}


//! count of subsequences whose sum=k
f(i,j){
    if(sum==0){return 1;}
    if(sum<0){return 0;}          //! simply dekho ki satisfied condtion me 1 return and unsatisfied me 0 return 
    if(i<0){return 0; }    

    int take=f(i-1,sum-arr[i])+ profit[i];
    int nottake=f(i-1,sum-arr[i])+0;

    return l+r;
}



//!knapsack
f(i,W){
    if(i==0){
        if(wt[0]>W){return 0;}                        //!cant take
        else if (wt[0]<W){return val[i];}             //!can take so return the value
    }                                                 //! VIMP LOGIC --> subset sum wale qn ki tarah mat dekhio
                                                      //!subset sum me BC: if(sum==0){return 1 ;} if(sum<0){return 0;}
    int take=-1e9;                                    //! KNAPSACK me bag of W pura nahi bharna so W==0 nahi hua to bhi chalega!!!
    if(W-wt[i]>=0){                                   //! 1 2 W=4 so u can take 1 and 2 and this would still be a valid ans, even though the bag is not filled
    int take=f(i-1,W-wt[i])+ val[i];}                 //! so KNAPSACK ke bc me sirf if(i==0) ek element baccha hoga to sochna
    int nottake=f(i-1,W-wt[i])+0;

    return max(l,r);
}




