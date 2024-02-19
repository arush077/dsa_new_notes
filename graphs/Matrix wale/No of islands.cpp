https://leetcode.com/problems/number-of-islands/

//since it is a 2d matrix problem it needs a 2d matrix for the visited 
//also here we can use the grid only as the 2d matrix for the visited and dont need to make a separate visited vector for it


    void dfs(int i,int j,vector<vector<char>>& grid){
        grid[i][j]='0';//visited vector ka main kaam hi ye bata karna ki kaha visit kar sakte ho aur kaha nahi
//so we are using the grid as the visited array ki agar 1 he to waha ja sakte he and as soon as waha pohochenge fir use 0 krenge

        int di[]={0,-1,0,+1};
        int dj[]={+1,0,-1,0};

        for(int x=0;x<4;x++){
            int ni=i+di[x];
            int nj=j+dj[x];

            if(ni>=0 && ni<grid.size() && nj>=0 && nj<grid[0].size()){
                
                if(grid[ni][nj]=='1'){
                dfs(ni,nj,grid);
                }
            }

        }

    }



    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    dfs(i,j,grid);
                    count++;
                }
            }
        }

        return count;
    }