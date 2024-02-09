//! Same use as djkastra ki single source se all nodes tak ka min distance ek 1d vector me return karta he 
//!Bellman ford works only on directed graphs
//!Bellman ford was introdced becqause Djkastra could not handle the negative edges
//! 1----2  simply 1---->2  1 se 2 and 2 se 1 connect karke ab ye directed ho gaya now apply bellman
//!                 <----
//! TC : O(V*E)

//! bellman bhi ek case me fail hoga jab sum of cycle weight<0 matlab ek loop me saare weights ka sum<0 ara ho

//      -1     1
//   1------2------5                      -1 + -2 + -3 = -6
//   \     /                            so maanlo 1 se 5 me jaana he 
// -3 \   / -2                          1--2--5 => -1 + 1=0
//     \ /                              1--3--2--5 => -3 + -2 + 1 =4
//      3                               1--3--2--1--3--2--5 => -3 + -2 + -1 + -3 + -2 + 1 => -2   ese bohot loop maroge to bohot minimum value aate jaegi so this is not allowed



  vector<int> d(n+1,INT_MAX);  //distance vector me sabko inf se initialize kardo n+1 ka size if nodes start from 1 indexing
        d[k]=0;
          
      //use standard bellman ford algorithm O(v*e) and kuch nahi karna bas pure edgelist ko n-1 times iterate karke sabme bas relax karne ka try karo
        
        
        for(int i=0;i<n-1;i++){
        //n-1 times iterate karna he where n is the no of nodes in the graph
       
        for(int j=0;j<times.size();j++){
            //edgelist par traverse marna in bellmann
            //relaxation karna if(d[u]+w(u,v)<d[v] then d[v]=d[u]+w(u,v))
            int u=times[j][0];
            int v=times[j][1];
            int w=times[j][2];
            if(d[u]>=INT_MAX){continue;}        //ye check kar lena before relaxation because d[u] agar INT_MAX hui to usme w add karne par overflow hoga
            if(d[u]+w<d[v]){d[v]=d[u]+w;
            
            }

        }
        }