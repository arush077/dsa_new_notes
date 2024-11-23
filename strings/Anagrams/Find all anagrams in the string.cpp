https://leetcode.com/problems/find-all-anagrams-in-a-string/




//1. brute force
    bool anagram(string a, string b){
        unordered_map<char,int> m;

        if(a.length()!=b.length()){return false;}

        for(int i=0;i<a.length();i++){
            m[a[i]]++;
        }

        for(int i=0;i<b.length();i++){
            m[b[i]]--;
            if(m[b[i]]==0){m.erase(b[i]);}
        }

        if(m.size()==0){return true;}
        return false;
    }


    vector<int> findAnagrams(string s, string p) {

        if(p.length()>s.length()){return {};}

        vector<int> ans;
        for(int i=0;i<=s.length()-p.length();i++){

            // i is the starting index
            string x = s.substr(i,p.length());

            if(anagram(x,p)){
                ans.push_back(i);
            }
  
            cout<<x<<endl;

        }


        return ans;
    }
};

//----------------------------

optimal : sliding window