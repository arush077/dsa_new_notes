 https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1


//!Recursion se n^n me jaega because every element se maximum n jump maar sakte 
//! so har n element ke lie n options
//! DP se to solve hogaya but O(n^2) aaraha he 
//! Iterative tarika to nahi aara
 
 int jumper(int i,int arr[],int n,vector <int> &dp){
      if(i==n-1){return 0;}                //! last place par aagaya to jump aur kitna karega
      if(arr[i]>=n-i-1){return 1;}         //! last place tak jump maarne ki aukad rakta he so 1 jump me chahiye to n-1 index tak pohoch jaega
      if(arr[0]==0){return -1;}            //! pehla element hi 0 to kya hi hoga iska return -1
      if(arr[i]==0){return +1e9;}          //! agar koi i index pe 0 aagaya to khatam uss path ko idtch karna hoga
      
      if(dp[i]!=-1){return dp[i];}
      
      int mini=+1e9;
      for(int k=arr[i];k>=1;k--){                             //! har i ke lie k=arr[i] ... 1 tak jump maar sakta
          int possibilities= 1 + jumper(i+k,arr,n,dp);
          mini=min(mini,possibilities);
      }
      
      return dp[i]=mini;
      
      
  }
  
    int minJumps(int arr[], int n){
        vector <int> dp(n,-1);
        // return jumper(0,arr,n,dp);
        if(jumper(0,arr,n,dp)>=1e9){return -1;}
        else{return jumper(0,arr,n,dp);}
        
    }





    
    