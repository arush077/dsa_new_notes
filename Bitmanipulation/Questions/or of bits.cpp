https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c/description/?envType=study-plan-v2&envId=leetcode-75 
 
 
 
 int minFlips(int a, int b, int c) {
        
        //a=0 b=0 c=1 just change anyone of a or b  (1 chnage)

        //a=1 b=0 c=0 then change b to 1 (1 chnage)

        //a=0 b=1 c=0 then change a to 0 (1 chnage)

        //a=1 b=1 c=0 then chnage a and b both to zero (2 chnage)



        //ye kyu 0 se 31 ka loop chalaya sapne me aaya kyaa??????
        //nahi concept he : a<=10^9 given he matlab a is an integer and we also know ki integer can be represented in maximum 32 bits

        int count = 0;
        for(int i =0 ; i<=31 ; i++){
            
            //where i is the bit jese bit0 bit1 bit2

            int ab;  //a ka bit
            int bb;  //b ka bit
            int cb;  //c ka bit

            // (x & (1<<k)) tells if kth bit of x is one or not = (agar value=+ve he to 1 bit he agar value=0 he to 0 bit he)

            if(a & (1<<i)){ab=1;}
            else{ab=0;}

            if(b & (1<<i)){bb=1;}
            else{bb=0;}

            if(c & (1<<i)){cb=1;}
            else{cb=0;}


            //nahi he sahi to count++ hoga
            if((ab | bb )!= cb){

                if(ab==0 && bb==0 && cb==1){count++;}
                if(ab==1 && bb==0 && cb==0){count++;}
                if(ab==0 && bb==1 && cb==0){count++;}
                if(ab==1 && bb==1 && cb==0){count=count+2;}

            }

        }

        return count;
        
    }