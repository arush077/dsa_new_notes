https://leetcode.com/problems/n-queens/description/


class Solution {
public:


    int valid(int i,int j,int n,vector<vector<char>> grid){

        //checking on the vertical above (i,j)
        for(int x=0;x<i;x++){
            if(grid[x][j] == 'Q' ){return false;}
        }

        //checking on the horizontal 
        for(int x=0;x<n;x++){
            if(grid[i][x] == 'Q' ){return false;}
        }

        // top right wala diagonal (i-1,j+1)
        int x_i = i;
        int x_j = j;
        while(x_i>=0 && x_j<n){
            if(grid[x_i][x_j] == 'Q' ){return false;}
            x_i--;
            x_j++;
        }

        // top left wala diagonal (i-1,j-1)
        x_i = i;
        x_j = j;
        while(x_i>=0 && x_j>=0){
            if(grid[x_i][x_j] == 'Q' ){return false;}
            x_i--;
            x_j--;
        }
        return true;
    }





    void f(int i,int n,vector<vector<char>> &grid){
        if(i==n){
            //your new possibility will be formed
        }

        for(int j=0;j<n;j++){
            // we are at i,j
            if(valid(i,j,n,grid)){    //check if this i,j is valid
                grid[i][j] = 'Q';     // place the Queen at i,j
                f(i+1,n,grid,ans);    // call the function
                grid[i][j] = '.';     // remove the Queen from i,j
            }
        }

    }


