https://leetcode.com/problems/surrounded-regions/description/


class Solution {
public:

    void dfs(int i,int j,vector <vector <char>> v,vector <vector <int>> &visited){
    visited[i][j]=1;
    
    int di[]={0,-1,0,1};
    int dj[]={1,0,-1,0};
    
    for(int x=0;x<4;x++){
        int ni=i+di[x];
        int nj=j+dj[x];
        
        
        if(ni>=0 && ni <v.size() && nj>=0 && nj<v[0].size()){
        if(v[ni][nj]=='O' && visited[ni][nj]==-1){
        dfs(ni,nj,v,visited);    
        }
        }
        
        
    }
    
    
}

    void solve(vector<vector<char>>& board) {
          
    // vector <vector <int> > v={{1,0,1,1},{0,0,1,1},{1,1,0,1},{1,1,1,1}};
    vector <vector <int>> visited(board.size(),vector <int>(board[0].size(),-1));
    int n=board.size();
    int m=board[0].size();
    for(int j=0;j<board[0].size();j++){
        if(board[0][j]=='O'){
            dfs(0,j,board,visited);
        }
    }
    
    for(int i=1;i<n;i++){
         if(board[i][m-1]=='O'){
            dfs(i,m-1,board,visited);
        }
    }
    
    for(int j=m-2;j>=0;j--){
         if(board[n-1][j]=='O'){
            dfs(n-1,j,board,visited);
        }
    }
    
    for(int i=n-2;i>=1;i--){
         if(board[i][0]=='O'){
            dfs(i,0,board,visited);
        }
    }
    
    
    // for(int i=0;i<visited.size();i++){
    //     for(auto itr:visited[i]){
    //         cout<<itr<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){
            if(board[i][j]=='O' && visited[i][j]==-1){
                board[i][j]='X';
            }
    }
    }


    }
};