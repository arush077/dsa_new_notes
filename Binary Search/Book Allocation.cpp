VVVVVVVIMP


//! CONCEPT

//array ka partition karkar unke partition sum ki max ka min karna he ya vice versa


//lets say yaha partition hori he among 3 people
//[1|2,3,4|5,6]
//1
//2,3,4
//5,6
//ese partitions kiye and then max sum ka try kiya ya kuch 
//to ye binary search se hota he solve



//everyone gets atleast one book so 
//agar maanlo ek hi banda hota to he would have gotten all 1+2+3+4+5+6==sum of all elements
//agar 6bande hote to sabko ek ek milta to abhi min(max value) =6==max element of array
//so possible ans lies bw max element ---------sum of elements so these 2 are endpoints of the BS
//and this process is known as search spsce find karna of a binary search





Binary search lagana hoga arr ke max element and sum of array ke beech me considering them to be first and the last element


  int findPages(int A[], int N, int M) 
    {
        //we will have to apply bs on maxelement-------------sum of elements and the mid that you get is essentially the ans and see if that ans is compatible with the value of M
        
        int maxi=-1e9;
        if(N==0){return 0;}
        else if(N==1){return A[0];}
        int sum=0;
        
        for(int i=0;i<N;i++){maxi=max(maxi,A[i]);sum+=A[i];}
        
        // cout<<" maxi "<<maxi<<" sum "<<sum<<endl;
        
        
        
        int s=maxi;
        int e=sum;
        int k=0;
        int res;
        while(s<=e){
            
           
            
            
            int mid=(s+e)/2;
            //  cout<<" s "<<s<<" e "<<e<<" mid "<<mid<<endl; 
            
            int newsum=0;
            int count=1;
            
            // while(k<N && newsum<=mid ){
            //     newsum+=A[i];
            // }
            
            // int maxi=0;
            // cout<<"hi"<<endl;
            // for(int i=0;i<N;i++){
            //     cout<<"bye"<<endl;
            //     if(newsum+A[i]<=mid){newsum+=A[i];
            //     cout<<" newsum "<<newsum;
            //     maxi=max(maxi,newsum);}
            //     else{
            //         newsum=A[i];
            //         count++;
            //     }
                
            //     int i=0;
            //         while(i<N){
            //     newsum+=A[i];
            //     if(newsum>M) count++,newsum=A[i];
            //     i++;
            // }
            
            int i = 0;
while (i < N) {
    newsum += A[i];
    if (newsum > M) {
        count++;
        newsum = A[i];
    }
    i++;
}
                
                
                
                
                // cout<<" count "<<count<<endl;
            
            
            if(count==M){ e=mid-1;res=mid;}
            
            else if(count<M){
                //you need to reduce your ans or the max pages given to a guy so that more guys get it
                e=mid-1;
            }
            
            else{
                s=mid+1;
            }
            
            
            
            
            
        }
        return res;
    }