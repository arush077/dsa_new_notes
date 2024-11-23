https://practice.geeksforgeeks.org/problems/maximum-difference-of-zeros-and-ones-in-binary-string4111/1 
 
 
 //Kadane laga diya noofzero-noofone ka maz chahiye tha
	    //matlab jab zero aaye tab bada karna
	    //matlab jab one aaye to chota karna
	    //saare 0 -> 1
	    //saare 1 ->-1
	    //so now sum bohot bada hoga when zeroes zyada honge and ones kam honge
	    //so use kadane to find max sum subarray
	    
	    
	    
	    int n=S.length();
	    int arr[n];
	    
	    for(int i=0;i<n;i++){
	        int chtoint = S[i] -'0';
	        arr[i]=chtoint;
	    }
	    
	    for(int i=0;i<n;i++){
	        if(arr[i]==0){arr[i]=1;}
	        else{arr[i]=-1;}
	    }
	    
	    
	    int curr_sum=0;
	    int max_sum=0;
	    for(int i=0;i<n;i++){
	        curr_sum=max(curr_sum+arr[i],arr[i]);
	        max_sum=max(max_sum,curr_sum);
	    }
	    
	   
	   
	   if(max_sum==0){return -1;}
	   
	    return max_sum;