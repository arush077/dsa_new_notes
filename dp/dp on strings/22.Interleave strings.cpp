https://www.geeksforgeeks.org/problems/interleaved-strings/1

A = "XBZ"

B = "ABC"

C="AXBCBZ"



so we can make multiple interleaving string Y like, XYZABC, XAYBCZ, AXBYZC, XYAZBC and many more so here your task is to check whether you can create a string Y which can be equal to C.
Check if C is interleave of A and B
if(c[k]==a[i]){then k and i aage badhao}
if(c[k]==b[j]){then k and j aage badhao}
if(c[k]==b[j]){u need to think of 2 possiblities ki ya to a[i] se equal kardu ya fir b[j] se equal kardu and then this opens up 2 branches}


     i        j         k
A = "XBZ"  B="ABC"   C="AXBCBZ"

    i          j         k
A = "XBZ"  B="ABC"   C="AXBCBZ"

      i        j          k
A = "XBZ"  B="ABC"   C="AXBCBZ"

//now B could have come from A or from B

case 1:                                  
       i       j           k
A = "XBZ"  B="ABC"   C="AXBCBZ"

case 2:
      i         j          k
A = "XBZ"  B="ABC"   C="AXBCBZ"

//return op1 || op2;



//follow standard format
//! Boolean me ek bhi sahi ho to true kardena yaar
bool f(i){
    if(condn){}


    bool op1=false;bool op2=false;

    if(condn1){op1=}
    if(condn2){op2=}

    return op1 || op2 ;


}

-------------------------------------------------------------------

bool f(int i,int j,int k,string a,string b,string c,vector<vector<int>> &dp){
        
        
        // if(i<a.length() && j<b.length() && k<c.length()){
        //     cout<<a[i]<<" "<<b[j]<<" "<<c[k]<<endl;
        // }
        
        
        
        if(i==a.length() && j==b.length() && k==c.length()){
            return true;
        }
        
        
        
        if(i==a.length() && j!=b.length()){
            
            //    k
            //fjdbspd
            
            //     i
            //abcd
            
            //   j
            //bcdspd     so simply check if spd exists in c
            
            if(b.substr(j)==c.substr(k)){return true;}
            
            else{return false;}
            
        }
        
        if(j==b.length() && i!=a.length()){
            
            if(a.substr(i)==c.substr(k)){return true;}
            
            else{return false;}
            
        }
        
        
        
        if(dp[i][j]!=-1){return dp[i][j];}
        
        bool op1 = false, op2 = false;
        if (i < a.length() && c[k] == a[i]) {
        op1 = f(i + 1, j, k + 1, a, b, c, dp);
    }

    if (j < b.length() && c[k] == b[j]) {
        op2 = f(i, j + 1, k + 1, a, b, c, dp);
    }

    return dp[i][j] = op1 || op2;
}
        
        
    
    
    
    
    
    
    
    
    bool isInterleave(string A, string B, string C) 
    {   
        vector<vector<int>> dp(A.length(),vector<int>(B.length(),-1));
        
        return f(0,0,0,A,B,C,dp);
    }





