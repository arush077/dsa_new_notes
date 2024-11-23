https://leetcode.com/problems/shortest-path-in-binary-matrix/description/


//! 2D matrix par bfs lagare ho to fir koi need nahi he for visited vector because yaha neighbors i,j se pata chalte he 
//! unlike normal graphs jaha adj list aati he jiske kaaran visited vector maintain karna padta he tumhe








class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
           queue <pair<pair<int,int>,int>> q;
        int temp;
        q.push({{0,0},0});

        if(grid[0][0]==1){return -1; }
        if(grid[grid.size()-1][grid[0].size()-1]==1){return -1;}



        while(!q.empty()){
        int i=q.front().first.first;
        int j=q.front().first.second;
        int d=q.front().second;
        q.pop();
        
        if(i==grid.size()-1 && j==grid[0].size()-1){
            //dest reached
            break;
        }

        int di[]={0,-1,-1,-1,0,+1,+1,+1};
        int dj[]={+1,+1,0,-1,-1,-1,0,+1};

        int maxi=-1e9;
        int mi=0;
        int mj=0;
        for(int x=0;x<8;x++){
            int ni=i+di[x];
            int nj=j+dj[x];
            if(ni>=0 && ni<grid.size() && nj>=0 && nj<grid[0].size() ){
                if(grid[ni][nj]==0){
                    // maxi=max(ni+nj,maxi);

                    if(ni+nj > maxi){
                        mi=ni;
                        mj=nj;
                        maxi=mi+mj;
                    }
                }
            }
        }
        q.push({{mi,mj},d+1});
        temp=d+1;



        }


    return temp+1;
    }
};