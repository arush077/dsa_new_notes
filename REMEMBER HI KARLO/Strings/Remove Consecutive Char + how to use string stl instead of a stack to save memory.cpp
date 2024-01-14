https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/

 

//! here u dont need the stack instead you can use the STL functions of the strings and reduce the memory needed
        
same stack logic hi lagaya he top me same mila to pop so yaha last element same mila to pop_back  warna push in stack so yaha push_back in string
// s2 = "" now abbacd he to 
// s2="a" 
// s2="ab"
// s2="ab" and u have a "b" in hand so "ab" ko "a" banado  
// s2="a" and u have "a" in hand so "a" ko "" banado
// s2="c"
// s2="cd"

        
        
        
        string s2="";
        for(int i=0;i<s.length();i++){
        if(!s2.empty() && s2[s2.length()-1]==s[i]){s2.pop_back();}
        else{s2.push_back(s[i]);}
        }
        return s2;




