FBD==> ye saare shortest distance wale he // FLoyd Warshall, Bellman Ford, Djkastra
Djkastra==> min dist from a src(one node) to all the nodes ==> VlogV same as nlogn as priority queue ya fir min heap use karte he isilie sorting ki time complexity aati he
BellmanFord=> Bellman same as Djkastra from one node to all the nodes ka min distance but negative edges allowed => O(v*e)
Floyd Warshall=>Floyd gives you shortest pair between every 2 pair of vertices and negative edges are allowed => O(V^3) => because every loop across every vertice and every vertice par pura 2d vector check hoga so v*v^2




	    for(int node=0;node<n;node++){
	        
	        //ek node ko pakda and then ab pura 2d matrix traverse  
		 for(int i=0;i<n;i++){
	    	for(int j=0;j<m;j++){
	                
	        if(i==node || j==node || i==j){
	            continue;
	        }
	                
	                
	               // i-----j ya fir i----node----j which gives u shorter yahi do options he tumhare paas
	               int op1=matrix[i][j];                            //already matrix has this value
	               int op2=matrix[i][node] + matrix[node][j];
	               
	               

				   //looking into -1 wale corner cases
	               if(matrix[i][j]==-1){
	                   if(matrix[i][node]!=-1 && matrix[node][j]!=-1){matrix[i][j]=op2;}
	                   else{continue;}
	               }
	               
	       		    if(matrix[i][node]==-1 || matrix[node][j]==-1){
                    continue;
            	   }
	              
	                 
	               //finally doing the distance ka comparisn of op1 and op2
	               if(op2<op1){matrix[i][j]=op2;}
	               
	            }
			}