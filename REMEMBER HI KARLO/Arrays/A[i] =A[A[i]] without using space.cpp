https://practice.geeksforgeeks.org/problems/rearrange-an-array-with-o1-extra-space3142/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
//without extra space karna he

concept 
[4,0,2,1,3]-->[3,0,2,1,3]-->[3,3,2,1,3] i ke piche ke chize to ek sahi state me hone chahiye to ye 3 3 kese araha he 
 i               i               i

so u need to keep a hold of the previous element as well ki first wale ko 4-->3 kiya lekin 4 ko nahi bhulna
that can be done by pichla + naya*n ka concept or naya +pichla *n ka concept
so lets say u use
no=pichla + naya* n so pichla chahiye to no%n and naya chahiye to no/n;
so in first position u store 4 + 3*5=19 so 19%5=4(pichla) and 19/5=3(naya)
so that way u get 2 things from one thing(19) only


  void arrange(long long arr[], int n) {
        
        for(int i=0;i<n;i++){
        
        int newi=arr[i]%n;
        long long naya=arr[newi]%n;
        long long decode = arr[i] + naya*n;
        arr[i]=decode;
        }
        
        for(int i=0;i<n;i++){
            arr[i]=arr[i]/n;
        }
        
        
        
    }