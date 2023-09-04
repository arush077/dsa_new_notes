//! min no of paths with obstacles so min no of paths to go from src to dest me dp hi lagao and not graphs

https://leetcode.com/problems/unique-paths-ii/submissions/

class Solution {
public:
    int pather(int i,int j,int n,int m,vector<vector<int>>& obstacleGrid,vector <vector <int>> &dp){
        if(i==n-1 && j==m-1){return 1;}
        if(obstacleGrid[i][j]==1){return 0;}
        if(dp[i][j]!=-1){return dp[i][j];}
        int d=0;
        int r=0;

        if(i+1<n){
            d=pather(i+1,j,n,m,obstacleGrid,dp);
        }

        if(j+1<m){
            r=pather(i,j+1,n,m,obstacleGrid,dp);
        }
        
        return dp[i][j]=d+r;




    }




    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid[obstacleGrid.size()-1][obstacleGrid[0].size()-1]==1){return 0;}
        vector <vector <int>> dp(obstacleGrid.size(),vector <int>(obstacleGrid[0].size(),-1));
        return pather(0,0,obstacleGrid.size(),obstacleGrid[0].size(),obstacleGrid,dp);
    }
};