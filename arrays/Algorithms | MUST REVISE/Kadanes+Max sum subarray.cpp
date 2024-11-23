Max sum ka subarray

//!now subarray ke lie u need to kmow ki dp lagana mushkil hoga
//!u generally use maps ya set ya aur kuch
//! Aur KADANES to +ve -ve kesa bhi elements ho sabpe chalega

for(int i=0;i<n;i++){
    
curr_sum=max(curr_sum+arr[i], arr[i]);            //matlab ya to arr[i] jodo and train lambi karo ya fir nayi train start karo arr[i] lekar and piche ke sum values ko bhul jaao
maxi=max(maxi,curr_sum);                          //maxm sum jaha se bhi aara ho usko uthalo


}


eg:


//concept element=1 now 1 has two choices ki prev train me jud jaau ya akele naya start karu so max(0+1,1) =1 =curr_sum
//        element=3 now 3 has two choices ki prev train me jud jaau ya akele naya start karu so max(1+3,3) =3=curr_sum

arr[]=        [ 1 , 3 , -5 , -1 , 2 , 4 ]
curr_sum=   0   1   4   -1   -1   2   6
max_sum=    0   1   4    4    4   4   6

so return max_sum=6;






