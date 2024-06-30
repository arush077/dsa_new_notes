oe 
out of bounds
empty stack






unix or path or directory wale qns bc
https://leetcode.com/problems/simplify-path/description/?envType=study-plan-v2&envId=top-interview-150


//! simply words nikalo and stack me daalo 
//! while travesing "/" encounter karte ho tab dekna ki kya karna he and start from index = 1
//! "." mila to ignore and ".." mila to stack se pop else stack me push karte jaao
//! last digit agar "/" nahi he tobhi manually dalo taaki sab cases ko ek hi code me process kar pao 
//! agar last me "/" nahi hoga to last word ka processing sahi se nahi hoga isilie










 //last wala slash must be removed exception "/"
       // do ya zyada slashes should be changed to one slash only
       //u can use a stack to push and pop shit

        //isme bola he .. matlab back jao
        //. matlab wahi pe raho 
        // .... ... or any other matlab its a file only

        // "/.../a/../b/c/../d/./"

        //    i 
        // "/.../a/../b/c/../d/./"                   
        // st = ...

        //       i 
        // "/.../a/../b/c/../d/./"                   
        // st = ... a 

        //          i 
        // "/.../a/../b/c/../d/./"                   
        // st = ...     

        //            i 
        // "/.../a/../b/c/../d/./"                   
        // st = ... b  

        //              i 
        // "/.../a/../b/c/../d/./"                   
        // st = ... b c

        //                 i 
        // "/.../a/../b/c/../d/./"                   
        // st = ... b 

        //                   i 
        // "/.../a/../b/c/../d/./"                   
        // st = ... b d

        //                     i 
        // "/.../a/../b/c/../d/./"                   
        // st = ... b d                        // . he dont do shit

        //                       i 
        // "/.../a/../b/c/../d/./"                   
        // st = ... b d      

        // store this stack thing in an array d b ...
        //reverse the array ... b d
        //and connect to make a string



        //oe out of bounds ya fir empty stack


 string s="";
        int n = path.size();
        stack<string> st;

        if(path[n-1]!='/'){path = path + "/";}
        cout<<path<<endl;

        for(int i=1;i<path.length();i++){
            //0th element to slash he hoga to start with 1
            
            while(i<path.length() && path[i]!='/'){
                s=s+path[i];
                i++;
            }


            if(i<path.length() && path[i]=='/'){
            //  //ab s mil gaya he tumhe 
            if(s==""){
                //matlab multiple slahses ka case he to continue kar de
                continue;
            }
            if(s=="."){}
            else if(s==".."){
                if(st.size()){
                st.pop();}
                }
            else{
                st.push(s);
            }
             s="";
            }

        }


        // if(s!=""){
        //     //s is not empty matlab last wala ek edge case miss hua he
        //     //jisme s to bana diya tha but it was never pushed onto stack cause wo last slash mila hi nahi
        //     // st.push(s);
        //     if(s=="."){
        //         //kuch nahi karna
        //     }
        //     if(s==".."){
        //         st.pop();
        //     }
        //     else{
        //         st.push(s);
        //     }
        // }


        vector<string> ans;
        while(!st.empty()){
            ans.push_back(st.top());

            st.pop();
        }


        reverse(ans.begin(),ans.end());

        for(auto itr : ans){cout<<itr<<" ";}

        string aans ="";

        if(ans.size()==0){return "/";}


        for(int i=0;i<ans.size();i++){
            string ss = ans[i];
            aans = aans +  ("/" + ss);
        }


        return aans;
