https://leetcode.com/problems/minimum-number-of-frogs-croaking/description/



//concept here we need to take care of frequency + order (VIMP in all string qns ki frequency and order)
// frequency check to sidhe map ne kardiya
// order/sequence check ke lie we used the croak method



class Solution {
public:
    int minNumberOfFrogs(string croakOfFrogs) {
        unordered_map<char,int> m;
        int n=croakOfFrogs.size();
        for(int i=0;i<n;i++){
            m[croakOfFrogs[i]]++;
        }


        if(m['c']==m['r'] && m['r']==m['o'] && m['o']==m['a'] &&m['a']==m['k'] ){
             int n=croakOfFrogs.size();
        int frogs_at_this_time=0;
        int c=0,r=0,o=0,a=0,k=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(croakOfFrogs[i]=='c'){c++;frogs_at_this_time++;}
            if(croakOfFrogs[i]=='r'){r++;}
            if(croakOfFrogs[i]=='o'){o++;}
            if(croakOfFrogs[i]=='a'){a++;}
            if(croakOfFrogs[i]=='k'){k++;frogs_at_this_time--;}

            maxi=max(frogs_at_this_time,maxi);

            //c par count++ and k par count--
            //to sabme r aaya to r++,o aaya to o++ etc. , ye kyu karre ho
            //because we need to check the order of occurence
            
            //  c r o a k 
            //  0 0 0 0 0
            // i

            //  c r o a k 
            //  1 0 0 0 0      //so here c ka value is more than c
            //  i

            //  c r o a k 
            //  1 1 0 0 0     //here r ka value is more than than o
            //    i
             

            //so trend is c>r>o>a>k
            
            //so negate cases ie 
            //if(c<r || r<o || o<a || a<k){return -1;} 

        
            if(c<r || r<o || o<a || a<k){return -1;} 
        }

        return maxi;




            
        }

        else{
            return -1;
        }



    }
};