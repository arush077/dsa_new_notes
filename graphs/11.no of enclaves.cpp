https://leetcode.com/problems/number-of-enclaves/description/

//! same ass question as that of surrounded regions
//! simple concept of boundary walo se dfs lagado simply
//! refer to 9.surrounded regions for better understanding

class Solution {
public:
     void dfs(int i,int j,vector <vector <int>> &v){
    v[i][j]=0;
    
    int di[]={0,-1,0,1};
    int dj[]={1,0,-1,0};
    
    for(int x=0;x<4;x++){
        int ni=i+di[x];
        int nj=j+dj[x];
        
        
        if(ni>=0 && ni <v.size() && nj>=0 && nj<v[0].size()){
        if(v[ni][nj]==1){
        dfs(ni,nj,v);    
        }
        }
        
        
    }
    
    
}


    int numEnclaves(vector<vector<int>>& grid) {
        //boundary se dfs lagana start karo simply
        
         // vector <vector <int> > v={{1,0,1,1},{0,0,1,1},{1,1,0,1},{1,1,1,1}};
    // vector <vector <int>> visited(grid.size(),vector <int>(grid[0].size(),-1));
    int n=grid.size();
    int m=grid[0].size();
    for(int j=0;j<grid[0].size();j++){
        if(grid[0][j]==1){
            dfs(0,j,grid);
        }
    }
    
    for(int i=1;i<n;i++){
         if(grid[i][m-1]==1){
            dfs(i,m-1,grid);
        }
    }
    
    for(int j=m-2;j>=0;j--){
         if(grid[n-1][j]==1){
            dfs(n-1,j,grid);
        }
    }
    
    for(int i=n-2;i>=1;i--){
         if(grid[i][0]==1){
            dfs(i,0,grid);
        }
    }
    
    
    // for(int i=0;i<visited.size();i++){
    //     for(auto itr:visited[i]){
    //         cout<<itr<<" ";
    //     }
    //     cout<<endl;
    // }

int count=0;
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
            if(grid[i][j]==1 ){
                count++;
            }
    }
    }

    return count;


    }
};