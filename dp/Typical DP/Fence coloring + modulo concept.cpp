https://practice.geeksforgeeks.org/problems/painting-the-fence3727/1

//! Fence ko color karna he such that there are n fences and k colors and 3 consecutive colors nahi bhar sakte ek saath

//!dont use that naive 3d dp ki pichla and pichle ka pichla ka track rackho as variables and 3d dp banao as index ka bhi ek var ayega

//! Trick : its a fibonacci problem : (k-1) * ( f(n-1)+f(n-2) )
//! matlab agar n=3 he to wo f(2) and f(1) pe depend karega 

//! kese aaya ye

//! Tricky to understand
//! n=3 and k=3 example

//! n=1  ans/no of ways =k;
//! n=2  ans/no of ways =k * k ;
//! n=3 

// start ke do same        : RR GG BB  so third element add karne ke har me k-1 tarike and start ke do same ese k possibilities so in totalk * (k-1)
// start ke do different   : RG GR BG BR RB BR  so third element choose karne ke k tarike for every possibility and no of possibility of start ke do different is k*(k-1) so in total k*(k-1)*k

//so sum of both cases k(k-1) + k(k-1)k = (k-1) * (k + k^2) = (k-1) * (f(1)+f(2));
//! so n=3 pe no of ways = (k-1) *(f(1) + f(2))


//! MODULO CONCEPT
return ans as a modulo of 10^9 + 7
matlab saare operations ke lie hi ab function call karna hi hoga + - * / sabka function banana padega ab to


#define MOD 1000000007
int add(int a,int b){
    return ( a%MOD  +  b%MOD   )%MOD;
}

int subtract(int a,int b){
    return (MOD + a%MOD - b%MOD)%MOD;    //andar ek mod add bhi karte he just in case negative ho gaya to bacha lega
}

int multiply(int a,int b){
    return (a%MOD * b%MOD) % MOD;
}

//! VIMP make these add and multiply wale functions
//! and now jabhi add ya multiply karna ho then use these only

int solve (int n,int k) {

    if(n==1){return k;}
    if(n==2){return k^2;}

    int ans = (k-1) * { f(n-1) + f(n-2) };                                //!WRONG as u did not use mod shit
    int ans = multiply (  k-1    ,   add(   f(n-1,k) , f(n-2,k)  )   );       //! CORRECT

    

    return ans;

}


//! ALSO WHEN U MEMOIZE IT DONT LET UR DUMBASS see no of values simply see the max value yaha maximum to n tak jaa sakta he to dp[n+1] ka banega