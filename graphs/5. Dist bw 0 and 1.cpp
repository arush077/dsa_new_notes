class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {

          vector <vector <int>> visited(mat.size(),vector <int>(mat[0].size(),0));
        queue <pair <pair<int,int>,int>> q;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    visited[i][j]=1;
                }
            }
        }

      


        while(!q.empty()){
            int i=q.front().first.first;
            int j=q.front().first.second;
            int dist=q.front().second;
            q.pop();

            int di[]={0,-1,0,+1};
            int dj[]={+1,0,-1,0};
            
            for(int x=0;x<4;x++){
                int ni=i+di[x];
                int nj=j+dj[x];

                if(ni>=0 && ni<mat.size() && nj>=0 && nj<mat[0].size() && !visited[ni][nj]){
                    if(mat[ni][nj]==1){
                        mat[ni][nj]=dist+1;
                        q.push({{ni,nj},dist+1});
                        visited[ni][nj]=1;
                    }
                }
            }





            // q.pop();
        }

        return mat;





    }
};