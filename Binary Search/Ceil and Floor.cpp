//! FLOOR AND CEIL CAN BE FOUND OUT USING BINARY SEARCH

//jab equality ki case aaye tab bhaag mat jaana tab try karna ki aur push karne ka 
//jese floor chahiye to piche laane ka try by e=mid-1

//and ans variable banana which keeps a track of floor and ceil 


//!CEIL
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){s=mid+1;}
        else if (arr[mid]>key){ans=arr[mid];e=mid-1;}
        else{s=mid+1;}
    }


//!FLOOR
 while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){ans=arr[mid];e=mid-1;}
        else if (arr[mid]>key){e=mid-1;}
        else{s=mid+1;}
    }