https://leetcode.com/problems/word-break/


//!Recursion soln


    bool breaker(string s,int i,unordered_set<string> &se){

        //simple start end ka concept lagana he i=start j=end but u dont send end wala index in the for loop 
        //as u want to create the temporary strings

        //temp me i fix hogaya ab j ko aage aage karke dekho

        if(i==s.length()){return true;}


        string temp;
        for(int j=i;j<s.length();j++){
            temp+=s[j];
            if(se.find(temp)!=se.end()){
                //found it
                //aage wale ko call maro next wale ka start waha se hoga jaha pichla wala end hua ie j+1
                //ye wala word to mil gaya aur agar aage wala bhi mila to return a true

                bool nextcall=breaker(s,j+1,se);
                if(nextcall){
                    return true;
                }
                
            }
        }

        //isko i-->j saare j pe iterate karne pe bhi koi bhi dictionary me nahi mila to return false;
        return false;


    }







    //! Top Down(Memoization)

     bool breaker(string s,int i,unordered_set<string> &se,vector <int> &dp){

        //simple start end ka concept lagana he i=start j=end but u dont send end wala index in the for loop 
        //as u want to create the temporary strings

        //temp me i fix hogaya ab j ko aage aage karke dekho

        if(i==s.length()){return true;}

        if(dp[i]!=-1){return dp[i];}

        string temp;
        for(int j=i;j<s.length();j++){
            temp+=s[j];
            if(se.find(temp)!=se.end()){
                //found it
                //aage wale ko call maro next wale ka start waha se hoga jaha pichla wala end hua ie j+1
                //ye wala word to mil gaya aur agar aage wala bhi mila to return a true

                bool nextcall=breaker(s,j+1,se,dp);
                if(nextcall){
                    return dp[i]=true;
                }
                
            }
        }

        //isko i-->j saare j pe iterate karne pe bhi koi bhi dictionary me nahi mila to return false;
        return dp[i]=false;


    }





    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set <string> se;

        for(int i=0;i<wordDict.size();i++){
            se.insert(wordDict[i]);
        }


        vector <int> dp(s.size(),-1);
        return breaker(s,0,se,dp);


    }




    //!Bottom Up
    