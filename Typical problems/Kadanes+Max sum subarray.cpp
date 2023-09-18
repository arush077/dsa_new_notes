Max sum ka subarray

//!now subarray ke lie u need to kmow ki dp lagana mushkil hoga
//!u generally use maps ya set ya aur kuch
//! Aur KADANES to +ve -ve kesa bhi elements ho sabpe chalega

for(int i=0;i<n;i++){
    
    curr_sum=max(curr_sum+arr[i], arr[i]);            //matlab ya to arr[i] jodo and train lambi karo ya fir nayi train start karo arr[i] lekar and piche ke sum values ko bhul jaao
    maxi=max(maxi,curr_sum);                          //maxm sum jaha se bhi aara ho usko uthalo


}