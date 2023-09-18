

//! BRUTE Tarika to simply saare subarrays ko generate karo and maximum product store karte chalo





//! OPTIMAL SOLUTION


    //! Concpet : prefix product and suffix produt so prefix product me i=0 se i=i ka product hoga and suffix me i=n-1 se i=i ka product hoga
    //! agar beech me 0 aajae so u need to start of new and fresh so prefix=1 reset kardena similarly suffix ke lie bhi
    //! jo bhi maximum hoga usko maxi me dalte rehna
    
    	long long maxProduct(vector<int> arr, int n) {
	    long long prefix=1;
	    long long suffix=1;
	    
	    long long maxi=-1e9;
	    int count=0;
	    
	    for(int i=0;i<n;i++){    
	        if(prefix==0){prefix=1;}
	        if(suffix==0){suffix=1;}
	        
	        
	        prefix=prefix*arr[i];
	        suffix=suffix*arr[n-1-i];
	        
	        maxi=max(maxi,max(prefix,suffix));
	       
	    }