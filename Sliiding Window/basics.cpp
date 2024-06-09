
//! SLIDING WINDOW

// fixed size=k

//! VIMP ki j++ sab cases me hi hoga isilie to fir koi koi log for loop laga dete he cause independent of the case j ko to hamesha hi aage badhana he lol wtf ratle ki j++ harbar hoga






while(i<n && j<n){
    sum+=arr[j];

    if(j-i+1<k){j++;}
    else if (j-i+1==k){

        //pehle max wagera nikalo uske baad fir sum-=arr[i] sab karo

        ans=max(ans,sum);

        sum-=arr[i];
        
        
        i++;
        j++;
    }
}



// variable size
sum=k ya kuch dede to 

while(i<n && j<n){
    sum+=arr[j];

    if(sum<k){j++;}
    else if (sum==k){
        maxi=
        j++;
        //! shocking ki j++ karre ho equality pe bhi
    }


    if(sum>k){
        while(sum>k){

            sum-=arr[i];
            i++;
        }


        // //while ke andar i++ and negative cases hatao and while ke bahar j++
        // j++;
    }





}





variable wale qns
Longest string with K unique char : var sliding window and simply map banana and if(m.size()<k) {j++}  if(m.size()==k){ans me dalna + j++}     if(m.size()>k){while(m.size()>k){m[arr[i]]--;i++}  j++   }
Longest string without repeating char : var sliding window + simply set banana as non repeating==set banana

zero flipping
Nice subarray

