https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/



class Solution {
public:

    void dfs(int i,int j,int ind, vector<vector<int>>& stones, vector<bool> &visited,int &count){
        visited[ind] = true;
        count++;

        // i,j
        // if i is constant, j varies on the same column 
        // if j is constant, i varies on the sam row

        cout<<i<<" "<<j<<endl;

        for(int s=0;s<stones.size();s++){
            int stone_i = stones[s][0];
            int stone_j = stones[s][1];

            if( ((i==stone_i) || (j==stone_j)) && (visited[s] == false) ){
                dfs(stone_i,stone_j,s,stones,visited,count);
            }
        }

    }



    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        int s = 1e5;
        // visited is 1d because every stone is a node and you dont have 2d stones
        vector<bool> visited(n,false);

         int ans = 0;
        for(int i=0;i<n;i++){
            int stone_i = stones[i][0];
            int stone_j = stones[i][1];


           // logic : no of elements in the connected component - 1 ka summation === the no of stones you can remove
           // neighbor ===== anyone who is lying on the same axis
            if(visited[i] == false ){
                int count = 0;
                cout<<" dfs call hora "<<stone_i<<" "<<stone_j<<endl;
                dfs(stone_i,stone_j,i,stones,visited,count);
                ans= ans + (count - 1);
            }

        }





        if(ans<0){return 0;}
        return ans;


    }
};