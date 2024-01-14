//! MINIMUM SWAPS FOR VALID PARANTHESIS
https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/


//! Simply count nikala and uska maximum dekh liya across the iteration and return (maxi+1) / 2 literally for no reason
//agar opening he to -1 and closing he to +1 kardiya count me and count ka maximum value maxi me daalke rakha he 

 int count=0;
        int maxi=-1e9;
        for(int i=0;i<s.length();i++){
            if(s[i]=='['){count--;}
            else{count++;}
            maxi=max(maxi,count);
        }

        return (maxi+1)/2;