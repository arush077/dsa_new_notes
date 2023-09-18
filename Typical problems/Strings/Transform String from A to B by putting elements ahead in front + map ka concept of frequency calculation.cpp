https://www.geeksforgeeks.org/transform-one-string-to-another-using-minimum-number-of-given-operation/
+
https://practice.geeksforgeeks.org/problems/transfiguration--141631/1


//! Dono ho jaenge

since u can put the words in the start so start iteration from the back
keep i on A ka end and j on B ka end
and keep increase count jabhi unequal ho and i--;
if they are equal then i--;j--;  

//! MAP HI USE KARNA FOR FREQUENCY CALCULATION OF THE 2 STRINGS 
//! Because map can handle 'a' and 'A but vector of size 26 banaoge to sirf 'a' to 'z' hi hold kar paega
//! after adding and subtracting iterate through the map and check ki har ek element ka value 0 he ya nahi


    int transform (string A, string B)
    {
       
        if(A.length()!=B.length()){return -1;}

        unordered_map <int,int> m;
        for(int i=0;i<A.length();i++){
            m[A[i]]++;
            m[B[i]]--;
        }
        
        for(auto itr : m){
            if(itr.second!=0){return -1;}
        }
        
        int i=A.length()-1;           //dono ko piche se start karo i is for A and j is for B
        int j=i;
        
        int count=0;
        while(i>=0){
            if(A[i]==B[j]){i--;j--;}  //equal hogaya to i-- j--
            else{                     //warna sirf i-- and count++
                i--;
                count++;
            }
        }
        
        return count;
        
        
        
    }


