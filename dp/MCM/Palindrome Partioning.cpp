isme do type ke qns aate he ki
1.min no of cuts to make all substrings between the cuts into a palindrome
2.2d vector me saare possible cuts jin cuts ko karne se every substring between them will be a palindrome
https://leetcode.com/problems/palindrome-partitioning/description/

class Solution {
public:

    bool palindrome(string s,int i,int j){
        while(i<=j){
            if(s[i]!=s[j]){return false;}
            i++;
            j--;
        }

return true;
    }



    int f(int i,string s,vector<int> &dp){
        if(i==s.length()){
            //ese hi socho i=starting point so if start is only pointing to n ie to nothing to kitne hi cut karoge
            return 0;
        }

        int mini=1e9;
        for(int j=i;j<s.length();j++){          //j chalega from i to last and j ka matlab he ki j ke just baad par cut lagega
            if(palindrome(s,i,j)){              //palindrome he to ek cut hoga
                mini=min(mini,1+f(j+1,s,dp));   
            }
        }

       return mini;

    }




    int minCut(string s) {
        //palindrome partitioning 100% front partition se hi hoga and isme f(i) bas ek hi parameter hoga and dusra parameter j hoga jo ki for loop me istemall hoga inside of the function
        vector<int> dp(s.length(),-1);
        return f(0,s,dp)-1;
    }
};



//REMBER KI YAHI LOGIC IS USED IN WORD BREAK ASWELL!!!!! so remember this format for dp on strings
f(i){
    for(int j=i;j<n;j++){

        f(j+1)
    }
}