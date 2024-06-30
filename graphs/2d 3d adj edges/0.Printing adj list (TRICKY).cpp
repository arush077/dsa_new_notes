lets say u have an adj list 
vector<vector<int>> adj(n);  //normal unweighted graph ka he ye


0 --- 1,2,3
1 --- 4,5

so u need to print i and then adj[i][j]




 for(int i=0;i<adj.size();i++){
            cout<<i<<" ";                                            
            // this doesnt work
            for(int j=0;j<adj[0].size();j++){                                    //! because yaha par u needed to take size as adj[i].size() and not adj[0].size()
                cout<<adj[i][j]<<" ";
            }
            cout<<endl;
        }