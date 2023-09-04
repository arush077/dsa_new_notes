
4 sided he to

       i-1,j
         |                
i,j-1<--i,j--> i,j+1
         |
       i+1,j

go in a circular form and write the di and dj
di={0,-1,0,+1};
dj={+1,0,-1,0};

now 4 chize he is bracket me to bina soche for loop for 4 elements
for(int x=0;x<4;x++){
    int newi=i+di;
    int newj=j+dj;

    //! vimp now check if newi and newj are valid or not
    if(newi>=0 && newi<n && newj>=0 && newj<m){
        //! continue karo
    }
}



//! same logic can be extended for the 8 sided traversal also



