//simply bas column fuse karte jaao 
//i and j se column start and column end
//so make a new array vector which stores the fused array ka sum from icolumn to jcolumn
//now is fused array par kadane laga dena simply and ur done as kadane max sum subarray dega so no need to select the rows by looping 

//brute : colstart, colend, rowstart, rowend ye sab fix karke O(n^4) me ek rectangle select hoga and then ab iss rectangle ke andar double for loop lagake sum nikalna



    int kadanes(vector<int> &v){
       int max_so_far = v[0];
       int curr_so_far = v[0];
       for(int i = 1; i < v.size(); i++){
           curr_so_far = max(v[i],curr_so_far+v[i]);
           max_so_far = max(max_so_far,curr_so_far);
       }
       return (max_so_far);
   }
   
  
    int maximumSumRectangle(int R, int C, vector<vector<int>> M) {
        int n=M.size();
        int m=M[0].size();
        int ans=0;
        int maxi=INT_MIN;

        for(int i=0;i<m;i++){
            vector<int> fused(n,0);
            ans=0;
            for(int j=i;j<m;j++){
// set the 2 columns then lookput for rows


                //set 
                // for(int row_start=0;row_start<n;row_start++){
                //     for(int row_end=row_start;row_end<n;row_end++){
                //       finally here now i j a b set ho chuka he ie four endlines jiske andar matrix constrained he 
                
                //       ab yaha double for loop lagake nikall lo
                        //   for(int i=row_start;i<=row_end;i++){
                        //       for(int j=col_start;j<=col_end;j++){
                        //           sum=max(sum,M[i][j]);
                        //       }
                        //   }
                           
                           
                           
                
                //     }
                // }
                //but isme 4 for loops to bas rectangle decide karne me and 2 for loops uske andar ka sum nikalne me laga=== 6 loops
                
                
                
                
                
                //so simply use the concept of fusing arrays into 1d array and calling KADANAE
                
                
                
                for(int r=0;r<n;r++){
                    fused[r]=fused[r]+M[r][j];
                }
                
                
                // cout<<kadanes(fused)<<" kadanes "<<endl;
                
                ans=kadanes(fused);
                maxi=max(maxi,ans);
                
                
                
                
                
                
                
                
                
            }
        }
        
        
        
        
        
        
        
        return maxi;
        
        
        
        
        
        
        
    }
};