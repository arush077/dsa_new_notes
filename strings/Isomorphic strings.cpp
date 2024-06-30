https://leetcode.com/problems/isomorphic-strings/?envType=study-plan-v2&envId=top-interview-150


// concept 
// ki map use karo to store new value of the thing
// ab har ispe check karo ki ye pehli baar aaya he ya nahi
//agar pehli baar aaya s[i]==t[i] to kuch nahi karna bas map me bolna he ki s[i]->s[i]
//agar pehli baar aaya s[i]!=t[i] to kuch nahi karna bas map me bolna he ki s[i]->t[i]

//agar pehle hi aa chuka to s[i] ka naya value ie m[ s[i] ] ko compare karo fir t[i] se



class Solution {
public:

    bool f(string s, string t){
        
        unordered_map <char,char> m;

        for(int i=0;i<s.size();i++){

            if(m.find(s[i])==m.end() && s[i]==t[i]){
                //pehli baar s[i] aara aur s[i]==t[i] he to 
                m[s[i]]=t[i];
            }

            else if(m.find(s[i])!=m.end() && s[i]==t[i]){
                //pehle aa chuka he to now s[i]->x[i] so x[i] == t[i] now
                if(m[s[i]]!=t[i]){return false;}
            }


            else if (s[i]!=t[i]){
                if(m.find(s[i])==m.end()){
                    //nahi he map me so its first occurence
                    m[s[i]]=t[i];
                }
                else{
                    //mila map me 
                    char map_me_newvalue = m[s[i]];

                    if(map_me_newvalue != t[i]){return false;}
                }




            }


        }

        return true;
    }



    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()){return false;}

        //lets maintain a map jo bataega wo character change hua he ya nahi

        //1.agar s[i]!=t[i] then check if s[i] was visited before or not
        //1.1 s[i] is present in the map (check if s[i]->t[i] it was chnaged to t[i] before or not if itwaschanged to some other value and not t[i] return false )
        //1.2 s[i] is not present in the map (first occurence he to u can change it and push s[i]->t[i] in map)

        //2. agar s[i] = t[i] then just push in map (s[i]->s[i]) so that u know it has been visited


        // egg     add
        
        // 0 index : m= e->a
        // 1       : m = e->a , g->d
        // 2       : g->d is present in the map so all good


        return f(s,t) && f(t,s);






    }
};