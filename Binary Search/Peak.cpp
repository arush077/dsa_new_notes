    int bs(vector<int>& arr){
        int n=arr.size();
        int s=1;
        int e=n-2;


        //since bola he ki index 0 ke piche -inf he
        // to agar arr[0] bada hoga 1 se to 0 will be a peak 
        //similarly for n-1 ya last wale ke lie bhi

        if(n==1){return 0;}
        if(arr[0]>arr[1]){return 0;}
        if(arr[n-1]>arr[n-2]){return n-1;}

        while(s<=e){
            int mid=(s+e)/2;
        
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;                                            //! yaha key nahi he yaha to bas arr[mid] and arr[mid +1] me khelna hota he 
        }

        else if (arr[mid]<arr[mid-1]){e=mid-1;}
        else if (arr[mid]>arr[mid-1]){s=mid+1;}
    
        }

        return -1;

    }


    int findPeakElement(vector<int>& nums) {
        return bs(nums);
    }