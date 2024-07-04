graphs/-1.dfs.drawio


void dfsrec(int node,adj,visited){

//!node enter hogaya he       

visitred[node]=1;

//sometimes no of islands wagera niklana ho to yaah count++ karte he after entering the node and count as a reference variable hota he 


//! now go onto neighbors

for(auto child :adj[node]){

//! child enter hone wala he abhi bas to enter karna he ya nahi wo socho  if(visited[child]){continue;}
    
    dfs(child,adj,visited);

//! child wapas backtrack kar raha
}

//! node wapas backtrack kar raha
}


}




//dfs in 2d array where we dont have node but we have i,j

   void dfs(int i,int j,vector<vector<int>>& heights,vector<vector<int>>& vis){
        vis[i][j] = 1;

        //agar neighbor wala bada he to chalo uspar
        int di[] ={0,-1,0,+1};
        int dj[] ={+1,0,-1,0};

        for(int x=0;x<4;x++){
            int ni = i + di[x];
            int nj = j+  dj[x];

            //check for neighbors (vvc) = validity + viisted + condition
            if(ni>=0 && ni<heights.size() && nj>=0 && nj<heights[0].size()){
                if(vis[ni][nj]==0 && heights[ni][nj]>=heights[i][j]){
                    dfs(ni,nj,heights,vis);
                }
            }

        }
    }