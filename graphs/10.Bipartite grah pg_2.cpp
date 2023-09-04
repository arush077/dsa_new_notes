https://practice.geeksforgeeks.org/problems/bipartite-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=bipartite-graph

//! Simple DFS logic, DFS sirf visited mark karke baju wale pe jaata he dekta he ki baaju wala visited he ya nahi agar visited he to
//! jump call nahi karega lekin agar visited nahi he to call marega uspar

//! Bipartite logic : ek naya visited vector lekin isme colors store karo and esa koi case check karo jaha par adj node and node dono ka color same ho jaae
//! then it wont be a birpartite and u will have to return a false 



bool dfs(int node,char ch,vector <char> &visited,vector<int>adj[]){
        visited[node]=ch;
        
        for(auto adjnode : adj[node]){
            if(visited[adjnode]=='x'){
                // (ch=='y')?dfs(adjnode,'g',visited):dfs(adjnode,'y',visited);
                if(ch=='y'){
                    if(dfs(adjnode,'g',visited,adj)==false){return false;};
                }
                else{
                    if(dfs(adjnode,'y',visited,adj)==false){return false;};
                }
            }
            
            else{
                //loop detected
                if(ch==visited[adjnode]){
                    return false;
                }
                
            }
            
            
        }
        
        return true;
        
        
    }




	bool isBipartite(int V, vector<int>adj[]){
	    vector <char> v(V,'x');
	    for(int i=0;i<V;i++){
	        if(v[i]=='x'){
	            if(dfs(i,'y',v,adj)==false){return false;}
	        }
	    }
	    
	    
	    return true;
	}
