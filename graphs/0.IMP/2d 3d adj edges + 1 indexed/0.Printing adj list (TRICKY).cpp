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




 for(int i=0;i<adj.size();i++){
            cout<<i<<" ";                                            
            // this works
            for(int j=0;j<adj[i].size();j++){                                    //! because yaha par u needed to take size as adj[i].size() and not adj[0].size()
                cout<<adj[i][j]<<" ";
            }
            cout<<endl;
        }




//!-----------------------------------------------------------------------------------------------
//! IMP 


// edges
// adj matrix
// adj list 



     4             5
1----------> 2 ----------> 3

1. edges = [1,2,4] , [2,3,5]



// here notice that the nodes are starting from 1 and are 1 indexed, so arr ka size will be n+1 and not n so that the nth node also can be accomodated
//0th index walo ko you can ignore
2. adj matrix =   0  1  2  3
                0 0  0  0  0
                1 0  0  4  0
                2 0  0  0  5
                3 0  0  0  0



3. adj list = 
// here notice that the nodes are starting from 1 and are 1 indexed, so arr ka size will be n+1 and not n so that the nth node also can be accomodated
//0th index walo ko you can ignore
    0 --> 
    1 --> {2,4}
    2 --> {3,5}
    3 -->



//!-----------------------------------------------------------------------------------------------