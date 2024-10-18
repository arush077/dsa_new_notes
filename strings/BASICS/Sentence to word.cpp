//sentences ko words me break karna ho toh

"  alice and bob love leetcode"

// whenever you find a space tab rukjaana jo temp hoga wo tera word hoga and temp="" kardena wapas
// remember ki starting ke spaces ko hatao ek while loop dalke
// last ka word bachega ek to after all iterations check if temp.length()!=0 he to last word dalna reh gaya

"  alice and bob love leetcode"

        
        
        
        
        
        while(i<n && sentence[i]==' '){i++;}  //atleast reach a character first yaar
        
        string s = "";

        for(int i=0;i<n;i++){
            if(sentence[i]==' '){
                //hogaya string ban gaya
                cout<< s<<endl;
                s="";
            }

            else{
                s= s + sentence[i];
            }

        }


        //agar last ka letter reh gaya ho tab ye karna
        if(s.length()!=0){
            cout<<s<<" Testing:"<<testing(s)<<" count:"<<count;
            if(s.length()!=0 && testing(s) ){count++;}

        }