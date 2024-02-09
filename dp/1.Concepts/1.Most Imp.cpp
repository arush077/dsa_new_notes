//! Max sum

if(i<0){sum=0;}
int take=-1e9;
// Condn
take=f(i-1,) + arr[i];
nottake=f(i-1,) + 0;
return max(take,nottake);




//! yaad hi karlo dp ka basic matlab base case ke niche condition dalkar multiple options me se return min option


RR:

max sum                      :          take=f(i)+arr[i] nt=f(i)  return max(t,nt)
max no of elements           :          take=f(i)+1      nt=f(i)  return max(t,nt)
max no of ways/possible path :          take=f(i)        nt=f(i)  return t+nt          base case me 1 dalna if you wanna take the path


f(i){
    if(i==n){return 0;}   //BC

    if(cond1){
        op1=f(i)+something;
        op2=f(i)+something;
        return min(op1,op2);
    }

    else{
        op3=f(i)+something;
        op4=f(i)+something;
        return min(op3,op4);
    }
}





//! Boolean me ek bhi sahi ho to true kardena yaar
bool f(i){
    if(condn){}


    bool op1=false;bool op2=false;

    if(condn1){op1=}
    if(condn2){op2=}

    return op1 || op2 ;


}






//! Max no of elements

if(i<0){return 0;}

int take=-1e9;
// Condn
take=f(i-1,) + 1;
nottake=f(i-1,) + 0;
return max(take,nottake);




//! Max no of paths (VIMP : take me +1 mat karna as ek path ka +1 BC hi provide kardeta he uss path ke har element pe jaake +1 karne ki koi need nahi he, so better he ki l aur r hi rakho taaki tum take me 1+ naa karo and l+r return kardena)
if(i<0){

}
int take=-1e9;
// Condn
take=f(i-1,) + 0;
nottake=f(i-1,) + 0;
return take + nottake;


//! Unbounded
if(i==0){
    if(k%arr[i]==0){return k/arr[i];}
    else{return -1e9;} //ditch the path
}
//condn
int take= f(i) //u wont go back
int nottake= f(i-1)
return max(take,nottake)



//! TC of DP on grids
//TC of recursion DP on grids : 
// (bottom or right) 2^(m*n) because every cell has 2 options to move down or right and no of cells=m*n
// (i+1,j) (i+1,j-1) (i+1,j) isme since har step pe tum ek niche jaare ho so essentially u are covering only n values and then each value has 3 options so 3^(n)

// DP ka hi concept
// recursion me usually 2^m ya kuch lag jaata he TC but memoization me TC : (variable1 * variable2 * variable 3 ) ka lagega


//! Conversion from recursion to tabulation (VIMP)
 fn to dp table tab kabhi kabhar f(i+1) tha to dp[i+1] hoga 
 so u need to take care ki i+1 aaya he to dp ki size ek se badi karni hogi tabhi i+1 fit hogi 
 
 and agar f(i-1) he to dp[i-1] matlab i=0 pe dp[-1] point karri hogi 
 so shifting of indexes lagani hogi