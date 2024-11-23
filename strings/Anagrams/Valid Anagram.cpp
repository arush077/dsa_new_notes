https://leetcode.com/problems/valid-anagram/
//! MANY METHODS
1. frequency badhao and then freq ghatao using map TC:O(n) SC:O(26) ya O(1)
2. sort kardo and ek point to note: ANAGRAM ON SORTING WILL GIVE YOU SAME RESULT (tea,eat ===sort===aet,aet) TC:O(nlogn) SC:O(1)
  bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){return 0;}

        unordered_map <char,int> m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }

        for(int i=t.length()-1;i>=0;i--){
            m[t[i]]--;
            if(m[t[i]]==0){m.erase(t[i]);}
        }

        if(m.size()==0){return true;}
        else{return false;}

    }