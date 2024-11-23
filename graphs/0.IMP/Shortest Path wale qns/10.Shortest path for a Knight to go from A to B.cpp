https://practice.geeksforgeeks.org/problems/steps-by-knight5927/1
//! Concept : Shortest path he aur 2d matrix????
//! 2d matrix theek he lekin knight can move in all 8 directions in one jump ya to bol sakte he ki all 8 positions are level1 
//! wese hi next jump from all possible 8 locations can be the jumps to level 2
//!so that way minimum distance milega considering each level at 1 step jump

// bfs lagaenge because saare 8 positions where the knight can move to can be considered as level 1 of the bfs and considering the start position as level 0
	    // so the lesser the no of levels the better or the shorter the path would be 
	    // also unweighted graphs ke shortest path nikalne hote he to 100% it is a bfs ka qn and not djkastra as it will be for the weighted things but matrix wale qns are generally unweighted so shortest path in a matrix matlab bfs and all possible positions from the src are the level 1
	    
	    
	    queue<pair<pair<int,int>,int>> q; //(x,y,dist)
	    vector<vector<int>> visited(N,vector<int>(N,0));
	    int srcx=KnightPos[0];
	    int srcy=KnightPos[1];
	    
	    int destx=TargetPos[0];
	    int desty=TargetPos[1];
	    
	    q.push({{srcx,srcy},0});
	    
	    while(!q.empty()){
       
	        int x=q.front().first.first;
	        int y=q.front().first.second;
	        int dist=q.front().second;
	        q.pop();
	        
	       // cout<<x<<y<<dist<<endl;
	        
	        
	        
	        
  
	        //neighbors
	        int di[]={+2,+1,-1,-2,-2,-1,+1,+2};
	        int dj[]={-1,+2,+2,-1,-1,-2,-2,-1};
	        
	        for(int m=0;m<8;m++){
	            int ni=x+di[m];
	            int nj=y+dj[m];
	            
	            
	            if(ni==destx && nj==desty){return dist+1;}
	            
	            if(ni>=0 && ni<N && nj>=0 && nj<N && !visited[ni][nj]){
	                visited[ni][nj]=1;
	                q.push({{ni,nj},dist+1});
	            }
	            
	            
	            
	            
	            
	        }
	        
	        
	    }
	}