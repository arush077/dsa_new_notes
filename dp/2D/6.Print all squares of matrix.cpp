//concept
//print all rectangles of a matrix ko O(n^4) lagta he 
//yahi same code chipkao for squares also but with a check ki if(rowend-rowstart == colend-colstart){//to hi square hoga}

//rectangles saare
for(int rowstart=0;rowstart<n;rowstart++){
    for(int rowend=rowstart;rowend<n;rowend++){
        //abhi rowstart aur rowend fix hua he to ab colstart aur colend bhi fix karlo

        for(int colstart=0;colstart<m;colstart++){
            for(int colend=0;colend<m;colend++){
        //abhi rowstart rowend colstart colend define hogaya ab traverse karna he agar iske andar to kar sakte ho using double for loop

            //2d for loop to print the thing
            for(int i=rowstart;i<=rowend;i++){
                for(int j=colstart;j<=colend;j++){
                    cout<<arr[i][j];
                }
            } 

            }
        }



    }
}




//AGAR SQUARE karne hote to all u have to do is to simply before printing check if(rowend-rowstart == colend-colstart){//to hi square hoga}
