// Pattern matching O(N*M) se to kar hi sakte he very easily
matlab i iterate karega s1 pe and s2 pe j iterate karega 
but u comapare s1[i+j] with s2[j]

    i  
c d a b c
a b d
j

j==0   s1[i+j] ==s2[j] ha ye he to count++;




    i  
c d a b c
a b d
  j

j==1   s2[i+j]==s2[j] ha ye to he so count++;

    i  
c d a b c
a b d
    j

j==3 s2[i+j]==s2[j] doesnt hold so break out of the j loop








for(int i=0;i<s1.length-s2.length;i++){
    for(int j=0;j<s2.length();j++){
        if(s1[i+j]==s2[j]){
            count++;
        }
        else{break;}
    }
    if(count==s2.length()){return true;}
}

return false;


warna fir KMP lagake khush rehna O(n)
RK=> rabin karp ya fir KMP algorithm lagate he warna
RK=> rabin karp ya fir KMP algorithm lagate he warna