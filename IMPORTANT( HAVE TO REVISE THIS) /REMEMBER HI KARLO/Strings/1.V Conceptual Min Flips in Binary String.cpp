https://leetcode.com/problems/minimum-number-of-flips-to-make-the-binary-string-alternating/


//! concept of "string rotation" ye he ki aage se uthake piche daala ho ya vice versa me simply u need to append the string to itself and then uspar sliding window lagao
//eg : s=1100 so s=1100 1100 append kardo and now char char ko lo window slide kar karke 1100 ya 1001 ya 0011 ya 0110 so rotation 
//karke yahi possibilities aati he bas ab inme se s1 and s2 do hi case ho sakte he either starting frm 0 or frm 1 matlab 01010101 ya fir 10101010 
//to fir me dono pe slide karke dekhunga s and s1 and s and s2 ki jisme bhi no of differences kam hongi usme no of flips bhi kam hongi 
//! also notice the writing of the code how they generatd alternating strings by using i%2 and shit 

int flipper(string s){

int n=s.length();
s+=s;
string s1="",s2="";
for(int i=0;i<s.length();i++){
     s1+= (i%2)?"1":"0";
     s2+= (i%2)?"0":"1";
}


int ans1=0;
int ans2=0;
int i=0,j=0;
int mini=+1e9;
while(i<s.length() && j<s.length()){
     ans1+=(s[j]!=s1[j]);
     ans2+=(s[j]!=s2[j]);
     
     if(j-i+1 < n){j++;}
     else{
     mini=min(mini,min(ans1,ans2));
     ans1-=(s[i]!=s1[i]);
     ans2-=(s[i]!=s2[i]);
          i++;j++;
          
          
     }    
     
}

return mini;
}