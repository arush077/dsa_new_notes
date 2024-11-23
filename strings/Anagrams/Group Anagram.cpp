https://leetcode.com/problems/group-anagrams/submissions/1129644316/
//!GOOD QN
//concept : sort karne par har anagram apne aukad par aajata he inshort same hojata he 
//Input: strs = ["eat","tea","tan","ate","nat","bat"]
//Output: [["bat"],["nat","tan"],["ate","eat","tea"]]





strs   = ["eat","tea","tan","ate","nat","bat"];
strsrt=  ["aet","aet","ant","aet","ant","abt"];  //individually har ek string ko sort kiya

make a Map

m= stringstr,vector<int>

aet  -> 0,1,3
ant  -> 2,4
abt  -> 5



now iterate over this
        aet  -> 0,1,3
        ant  -> 2,4
        abt  -> 5

and itr.second will be {0,1,3} so treat them as indexes of strs so you get {strs[0],strs[1],strs[3]} == {eat,tea,ate}

