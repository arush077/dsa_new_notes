//! Concept

i   j  //i on first and j on last element
abcba = if first and last element same honge to abcb + bcba + 1 return hoga 
abcb  = if first and last same nahi honge to abc+bcb-(beech ka bc) return hoga

//considering every letter is distinct
 abcba = a a b b c aa bb aba aba aca bcb abba abcba
 abcb  = a b b c bb bcb
  bcba = a b b c bb bcb
//abcba =abcb+bcba+1 == if(s[i]==s[j]){return f(i,j-1)+f(i-1,j)+1}


 abcb  = a b b c bb bcb
 abc   = a b c 
  bcb  = b b c  bb bcb
  bc   = b c 
//abcb=abc+bcb-(middle(bc)) == if(s[i]!=s[j]){return f(i,j-1)+f(i-1,j)-f(i-1,j-1)}


f(int i,int j,string s){
if(i>j){return 0;}
if(i==j){return 1;}  //ek element he to ek palindromic to ayega hi

if(s[i]==s[j]){return f(i,j-1)+f(i-1,j)+1;}
if(s[i]!=s[j]){return f(i,j-1)+f(i-1,j)-f(i-1,j-1);}

}

