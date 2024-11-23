https://leetcode.com/problems/largest-plus-sign/


    int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) {
        vector<vector<int>> grid(n,vector<int>(n,1));

        for(int i=0;i<mines.size();i++){
            int mine_i = mines[i][0];
            int mine_j = mines[i][1];

            grid[mine_i][mine_j] = 0; //updating the grid with 0 wherever we have mines
        }

        //simple concept of prefix sum will be used here
        // you make 4 grids left,right,top,down and you store the prefix sum in those directions

        // so at the mine you see all the four grids and the one with the lowest value will be taken
        // because all 4 should be able to handle that much 1s so you take the minimum of all four

        // take the example one for instance 
        // grid_l will have 2 at [3,1]
        // grid_r will have 4 at [3,1]
        // grid_top will have 4 at [3,1]
        // grid_bottom will have 2 at [3,1]
        // so we take the minimum = 2 which is our answer
        // just like we did at [3,1] like that do at all the elements of the 2d array and find the largest order

        //and agar beech me kahi zero aara ho while calculating the prefix sum then prefix sum will be reinitialized to 0 therefore breaking the streak


        vector<vector<int>> grid_l = grid;
        for(int i=0;i<grid.size();i++){
            int sum = 0;
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0){sum=0;}
                sum = sum + grid[i][j];
                grid_l[i][j] = sum;
            }
        }

        vector<vector<int>> grid_r = grid;
        for(int i=0;i<grid.size();i++){
            int sum = 0;
            for(int j=grid[0].size()-1;j>=0;j--){
                if(grid[i][j]==0){sum=0;}
                sum = sum + grid[i][j];
                grid_r[i][j] = sum;
            }
        }


        vector<vector<int>> grid_top = grid;
        for(int j=0;j<n;j++){
            int sum = 0;
            for(int i=0;i<n;i++){
                if(grid[i][j]==0){sum=0;}
                sum = sum + grid[i][j];
                grid_top[i][j] = sum;
            }
        }
               
        vector<vector<int>> grid_bottom = grid;
        for(int j=0;j<n;j++){
            int sum = 0;
            for(int i=n-1;i>=0;i--){
                if(grid[i][j]==0){sum=0;}
                sum = sum + grid[i][j];
                grid_bottom[i][j] = sum;
            }
        }

        int maxi = 0; // this will hold the maximum value as we keep iterating on all the elements
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){

                int order_at_this_element = min(min(grid_l[i][j],grid_r[i][j]), min(grid_top[i][j],grid_bottom[i][j]) );

                // maxi = max(maxi,order_at_this_element);
                if(maxi<order_at_this_element){
                    maxi = order_at_this_element;
                    cout<<i<<" "<<j<<endl;
                }
            }
        }


        return maxi;

    }
