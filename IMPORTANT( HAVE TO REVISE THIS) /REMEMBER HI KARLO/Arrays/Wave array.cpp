https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1

ip=[1,2,3,4,5]
op=[2,1,4,3,5]

simple observation index 0 2 4 ye saare even index aur inke aage wale swap hue he
1 swapped with age wala  index=0 pe tha 1
3 swappes with age wala  index=1 pe tha 3


 for(int i=0;i<n-1;i++){
  if(i%2==0){
                //odd posn
                swap(arr[i],arr[i+1]);
   }
 }