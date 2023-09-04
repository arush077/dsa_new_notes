https://leetcode.com/problems/rotting-oranges/description/

//! samjho yaha pe level wise kaam chalra he 
//! pehle saare 2 ko pakdo and dekho wo kis kis ko 2 banate he so its like level wise 
//! BFS lagao with queue holding i,j,time and start with time=0 and gradually keep increasing the time by 1 and return the max time which is possible

int orangesRotting(vector<vector<int>>& grid) {
      
queue <pair<pair<int,int>,int>> q;
for(int i=0;i<grid.size();i++){
    for(int j=0;j<grid[0].size();j++){
        if(grid[i][j]==2){                       //! matlab yaha par jitne bhi 2s ho un sabko ek saath dekna he so its a level order traversal because ye saare oranges are ttrying to rot the surrounding at the same time simultaneously and not one after the other
            q.push({{i,j},0});
        }
    }
}

int n=grid.size();
int m=grid[0].size();

int maxtime=0;

int count=0;
while(!q.empty()){
    int size=q.size();
    count++;
    for(int i=0;i<size;i++){
        auto temp=q.front();
        q.pop();
        int x=temp.first.first;
        int y=temp.first.second;
        int time=temp.second;
        maxtime=max(maxtime,time);
        if(x+1<n && grid[x+1][y]==1){grid[x+1][y]=2;q.push({{x+1,y},time+1});}       //! ye saare neighbors he jinko tum usually for(auto itr:adj[node] karke karte the)
        if(x-1>=0 && grid[x-1][y]==1){grid[x-1][y]=2;q.push({{x-1,y},time+1});}
        if(y+1<m && grid[x][y+1]==1){grid[x][y+1]=2;q.push({{x,y+1},time+1});}
        if(y-1>=0 && grid[x][y-1]==1){grid[x][y-1]=2;q.push({{x,y-1},time+1});}

    }
}

int countzero=0;

for(int i=0;i<grid.size();i++){
    for(int j=0;j<grid[0].size();j++){
        if(grid[i][j]==1){
            return -1;
        }

        if(grid[i][j]==0){countzero++;}
    }
}

if(countzero==n*m){return 0;}
return maxtime;


    }




