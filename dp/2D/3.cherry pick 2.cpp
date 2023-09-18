https://leetcode.com/problems/cherry-pickup-ii/





//! BC me do base case ayenge ek to when u go out of bounds and dusra when u reach our destination
//! since sab traversals me you are moving i+1 so you don't need i1 and i2 simply ek hi lo as both of them go one down in one iteration
//! agar you both reach same position then ek hi ko pickup karo warna pick both of them up
//!CONCEPT : A ke ek traversal ko pakdo and B ke saare traversal karalo



 int f(int i1,int j1,int j2,int n,int m,vector<vector<int>>& arr){
        //2 base conditions one is for destination and other is for out of bounds
        if(i1<0 || j1<0 || i1>=n || j1>=m || j2<0 || j2>=m){return -1e9;}  //out of bounds

        if(i1==n-1){   //destination reached
            if(j1==j2){return arr[i1][j1];}
            else{return arr[i1][j1] + arr[i1][j2] ;}
        }


        int maxi=-1e9;
        int value=0;
        int dj[]={-1,0,+1};
        int val=0;
        for(int x=0;x<2;x++){
            for(int y=0;y<2;y++){
                int nj1=j1+dj[x];
                int nj2=j2+dj[y];

                if(nj1 >=0 && nj1<m && nj2>=0 && nj2<m){

                if(j1==j2){
                val+= arr[i1][j1];}
                else{
                val+=arr[i1][j1]+arr[i1][j2];
                }
                }

                maxi=max(maxi,val + f(i1+1,j1,j2,n,m,arr));
            }
        }

        return maxi;

    }



    int cherryPickup(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        return f(0,0,m-1,n,m,grid);
    }