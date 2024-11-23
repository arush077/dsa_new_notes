//row1 col1 and row2 col2 diya hoga

//! 1.o(n*m)

for(i=row1;i<=row2;i++){
    for(int j=col1;j<=col2;j++){
        sum+=arr[i][j]
    }
}


//!2.o(n)

//rows ko precalculate kardena

        // c1   c2                           c1   c2 
//   r1 1   2    3                    r1  1   3    6
//   r2 4   1    2           ->       r2  4   5    7
//      1   2    1                        1   3    4

        // ans=2+3+1+2=8                   ans= u iterate over r1 : arr[r1][c2] - arr[r1][c1-1] = 6-1=5
        //                                                     r2 : arr[r2][c2] - arr[r2][c1-1] = 7-4=3
        //                                                                                           ----
                                                                                                // 5 + 3 = 8

//! 3. o(1) tarika

        // c1   c2                           c1   c2 
//   r1 1   2    3                    r1  1   3    6
//   r2 4   1    2           ->       r2  5   8    13
//      1   2    1                        6   11   17

          =8                               = 


        //precalculate krna he 
        int n = matrixx.size();
        int m = matrixx[0].size();

        //pehla row ko alag se handle karrahe kyuki uske upar kuchbhi nahi he 
        int pr=0;
        for(int j=0;j<m;j++){
            pr+=matrixx[0][j];
            matrixx[0][j]=pr;
            cout<<matrixx[0][j]<<" ";
        }
        cout<<endl;


        for(int i=1;i<n;i++){

            int rsum=0;
            for(int j=0;j<m;j++){
                rsum+=matrixx[i][j];
                matrixx[i][j]=rsum + matrixx[i-1][j];
                cout<<matrixx[i][j]<<" ";
            }
            cout<<endl;
        }
    }
