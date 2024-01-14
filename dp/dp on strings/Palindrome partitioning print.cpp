//! same as min no of cuts for palindrome partition we use front partition

//bas isme call se pehle v me push
//call ke baad v se pop
//i==n pe 2d vector me push 






  bool palindrome(int i,int j,string s){
        while(i<=j){
            if(s[i]!=s[j]){return false;}
            i++;
            j--;
        }

        return true;}

    
    void f(int i,string s,vector<string> &v,vector<vector<string>>& ans){
        if(i==s.length()){
            ans.push_back(v);
            return ;}

        for(int j=i;j<s.length();j++){
            if(palindrome(i,j,s)){

                v.push_back(s.substr(i,j-i+1));
                f(j+1,s,v,ans);
                v.pop_back();

            }
        }
    }




    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> v;

      
        f(0,s,v,ans);
        return ans;
