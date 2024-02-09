https://www.geeksforgeeks.org/problems/negative-weight-cycle3504/1

//concept: see bellman ford algo ka weakness : negative weight cycle
//! so agar n-1 times relax karne ke baad bhi optimum nahi aara and nth iteration par bhi relax hora matlab usme ek negative weight cycle he and since its bellman TC:O(v*e)


int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    
	    
	    if(n==1) //ese hi boundary case
        {
            return 0;
        }
        
	    
	    
	    
	    vector<int> d(n+1,INT_MAX);
        d[edges[0][0]]=0;
          
      //use standard bellman ford algorithm O(v*e) and kuch nahi karna bas pure edgelist ko n-1 times iterate karke sabme bas relax karne ka try karo
        
        
          
        
        for(int i=0;i<n-1;i++){
        //n-1 times iterate karna he 
       
        for(int j=0;j<edges.size();j++){
            //edgelist par traverse marna in bellmann
            //relaxation karna if(d[u]+w(u,v)<d[v] then d[v]=d[u]+w(u,v))
            int u=edges[j][0];
            int v=edges[j][1];
            int w=edges[j][2];
            if(d[u]>=INT_MAX){continue;}
            if(d[u]+w<d[v]){d[v]=d[u]+w;
            // cout<<" v "<<v<<" d[v] "<<d[v]<<endl; 
            }

        }
        }
        
        
      
        
        
        int val=0;
        for(int i=n;i<=n;i++){
             for(int j=0;j<edges.size();j++){
            //edgelist par traverse marna in bellmann
            //relaxation karna if(d[u]+w(u,v)<d[v] then d[v]=d[u]+w(u,v))
            int u=edges[j][0];
            int v=edges[j][1];
            int w=edges[j][2];
            if(d[u]>=INT_MAX){continue;}
            if(d[u]+w<d[v]){d[v]=d[u]+w;val=1;
            // cout<<" v "<<v<<" d[v] "<<d[v]<<endl; 
            }
        }}
        
        
        return val;
	    
	}
