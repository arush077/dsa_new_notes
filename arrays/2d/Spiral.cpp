
simple he maintain 4 pointers


                   sc(start_column)           ec(end_col)
                          |                       |

sr(start_row) ->          x    .................   x




er(end_row)  ->          x    .................... x



so with every round just keep closing in
sc++;ec--;sr++;er--;



//code
    void bound(int sr,int er,int sc,int ec,vector<int> &ans,vector<vector<int>>& matrix){
       //agar sr == er he to just push from sc to ec
       if(sr==er){
        for(int j=sc;j<=ec;j++){ans.push_back(matrix[sr][j]);}
        return ;
       }

       //if sc==ec to kya karna he 
       if(sc==ec){
        for(int i=sr;i<=er;i++){ans.push_back(matrix[i][sc]);}
        return ;
       }


       //then write for all the four boundaries
       
       
        // -------->
        for(int j=sc ;j<=ec ; j++ ){ans.push_back(matrix[sr][j]);}

        //right down
        for(int i=sr+1 ;i<=er ; i++ ){ans.push_back(matrix[i][ec]);}

        //<--------- bottom left
        for(int j=ec-1 ;j>=sc ; j-- ){ans.push_back(matrix[er][j]);}

        //upar ki taraf from left
        for(int i=er-1 ;i>=sr+1 ; i-- ){ans.push_back(matrix[i][sc]);}


    }


    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        int sr=0;
        int er=n-1;

        int sc=0;
        int ec=m-1;
 
        vector<int> ans;

        while(sr<=er && sc<=ec){
            cout<<sr<<er<<sc<<ec<<"y"<<endl;
        bound(sr,er,sc,ec,ans,matrix);
        sr++;
        er--;
        sc++;
        ec--;
        }   

        for(auto itr:ans){cout<<itr<<" ";}


        return ans;

    }
};