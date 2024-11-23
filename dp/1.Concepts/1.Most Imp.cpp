//! TOP DOWN AND BOTTOM UP


//!recursion
f(i){
    if(i==n){return 1;}

    int take= 1+f(i+1);
    int nottake = f(i+1);
    return max(take,nottake);
    }


//!top down

// dp size i== (0 to n)
//but memoization me we exclude the base case so //i== (0 to n-1) so 'n' size ka vector banao and initialize all element to '-1'

f(i,dp){
    if(i==n){return 1;}

  //if(dp[i]!=-1){return dp[i];}

    int take= 1+f(i+1,dp);
    int nottake = f(i+1,dp);

// return dp[i]=max(take,nottake);

}



//! bottom up
// dp size i== (0 to n)
//but bottom up me we include the base case so //i== (0 to n) so 'n+1' size ka vector banao and initialize all elements to '0'

int main(){

    //base case fill karao v[n]=1;

    //for(int i=n-1;i>=0;i--){

        //copy paste kardo pura code bas f(i+1) ke badle dp[i+1] kardena and return dp[i]=max(take,nottake) wale me bas "return" ko hata dena

    }

    return dp[0];    //dp[final iterations ke baad jaha rukhe wo]



}


-----------------------------------------------------------------
//! Take aur not-take dono nahi he but ek for loop he jaha function calling hori he and u want minimum

int f(i){
    for(){
        f(i+1)
    }
}

int f(i){

    int mini = +1e9;
    for(){
        mini = min(mini,f(i+1))
    }
    return mini;                        //! u can return mini just like that

}
 

-----------------------------------------------------------------


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




------------------------------------------------------------

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


------------------------------------------------------

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







-------------------------------------------------------
//! BACKTRACKING



 //! JABHI tumhe array return karne bole ya string return karne bole ek dp ke qn me to 100% BHAIYA WO BACKTRACKING KA QN HE (to isme void function banana hota he)
 https://leetcode.com/problems/combination-sum/ 

 void f(){

    if(){ans.push_back(v)}       //base case


    v.push_back()
    f(i+1,)                     //take ka call
    v.pop_back()



    f(i+1,)                     //nottake ka call



    //yaha pe return take + nottake wagera kuch nahi hota like dp lolllll bas itna hi chod do 
    //bas hogaya ab itna hi khaali chod de ab isko


 }



//! VIMP for backtracking
// whenever u use a 1d vector and then final base case hit hone pe 1d vector ka saaman 2d vector me dalte ho toh

void f( vector<int>&temp , vector<vector<int>>&dp ){
//!ye galat he
}

void f( vector<int>temp , vector<vector<int>>&dp ){
//!ye sahi he
}


//this is safe as kabhi temp.clear() karna ho to saare states ka temp clear ho jaega to kaika backtrack karoge fir jab pura data udd gaya so for safe side keep 1d vector as state variable and 2d vector as reference variable
--------------------------------------------------------------------------------------------------



// sometimes generator function me bhi dp lagani pad sakti he but void se int me aajana fir
// jab take nottake pe condition nahi but final string must be divisible by 25 ye final string must be a palindrome jesa kuch ho
//bas ek final condition ho jisse i==n wale bc me handle kare true he to return 0 warna ditch the entire route

int generator(int i,string &s){
    if(i==n){
        if(check final case ki s kesa hona chahiye){return 0;}
        return ditching_case                                          //matlab return -1e9 for maximum dp problem and +1e9 for minimum dp problem

    }

    s=s + '(';
    int do = 1 + generator(i+1,s);
    s.pop_back();

    
    int dont_do = 0 + generator(i+1,s);
    

    return min( do , dont_do )
}



-------------------------------------------------------------------------------------------------------------------
maanlo ki agar ek take to chahiye hi chahiye warna bekar he pura in a maxi dp question(jisme maximum nikalna he)

f(i,taken){

if(i==n){
    if(taken){return 0;}
    else{
        //abhi tak ek bhi taken nahi he bhai matlab kachra case he ye cancel this
        return -1e9;
    }

    int take = f(i+1,1);
    int nottake = f(i+1,take);
    return max(take,nottake)

}





}
---------------------------------------------------------------------------------------------------------------------

// if your dp qn requires a change in the existing array, matlab changing variable jese "i" hota he vese koi vector bhi change hora ho to 
// its better to keep nottake upar than take, 
// because usually these changes happen inside take so if you keep the take upar then this will messup the nottake wala part

//eg : shopping offer problem of dp (where you iterate over the offers and do take or not take)
https://leetcode.com/problems/shopping-offers/?envType=problem-list-v2&envId=dynamic-programming



---------------------------------------------------------------------------------------------------------------------

//1. Longest Palindrome Subsequence(LPS) : isme s and s_rev ka LCS will give you the answer



//2. DP OR Slidingwindow : DP usually to subsequences pe lagta he and SlindingWindow subarray(contigous) walo par lagta he