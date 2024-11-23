Shortest Common SuperSequence
s1= abc s2= bca     

ans = abcbca (no)
ans = abca (yes) ...as it has s1 and s2 both as its substrring ...(nooooo)
ans = abca (yes) ...as it has s1 and s2 both as its subsequence ...(yess here in lcs and scs we are talking about subsequences dumbass and not substrings)



so agar count chahiye bas iska to 

ans_count_scs = n + m - lcs(s1,s2);

//! Printing SCS




//! LCS Printing flashback
1. lcs ka code likhke pehle uska n+1 * m+1 ka dp table bharo  jisme
   0 to n and 0 to m size ka dp table hota he 

2. abhi bas ek while loop lagana bottom right se and while ( i>0 && j>0 ) tak jaana simply and lcs me jab jab equal elements aaye to s + dp[i][j] karna where s is initially and empty string ""
   if(s[i-1]==t[j-1]) he to move i-- j-- diagonal
   else (s[i-1] > t[j-1] ) he to move i-- j doesnt move 
   else                    he to move j-- i doesnt move



//!SCS Printing Flashback (step1 same he lcs lagake uska dp table nikalo)
1. lcs ka code likhke pehle uska n+1 * m+1 ka dp table bharo  jisme
   0 to n and 0 to m size ka dp table hota he 

2. abhi bas ek while loop lagana bottom right se and while ( i>0 && j>0 ) tak jaana simply and lcs me jab jab equal elements || equal elements naa bhi aaye to bhi s + dp[i][j] karna where s is initially and empty string ""
   traversing path remains the same just u need to pick all elements now
   path:
    if(s[i-1]==t[j-1]) he to move i-- j-- diagonal
   else (s[i-1] > t[j-1] ) he to move i-- j doesnt move 
   else                    he to move j-- i doesnt move
