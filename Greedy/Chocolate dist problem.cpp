https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1

// (max-min)=ka min chahiye tha but only for M elements of the N elements

//(max-min)= ka min tab mila sakta he jab wo saare M elements ek dusre se chipke ho or pure N elements ko sort mar dena and then aage ka - piche ka element karke mil jaega ans


   sort(a.begin(),a.end());
        long long mini=a[m-1]-a[0];
        for(int i=0;i<=n-m;i++){
            mini=min(a[i+m-1]-a[i],mini);
        }
        
        return mini;
    