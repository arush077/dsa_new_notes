//! V Easy bas ek parent variable banaro
//! when it is visited and not a parent then cycle found


//! dfs template

void dfsrec(int node,adj,visited){

//!node enter hogaya he       visitred[node]=1;

for(auto child :adj[node]){

//! child enter hone wala he abhi bas to enter karna he ya nahi wo socho  if(visited[child]){continue;}
    
    dfs(child,adj,visited);

//! child wapas backtrack kar raha
}

//! node wapas backtrack kar raha
}




  bool dfsrec(int node,vector <int> &visited,vector <vector <int> > adj,int parent){
        visited[node]=1;
       
        
        for(auto child: adj[node]){
            //! yaha pe decide karo ki child ko lena he ya nahi
            if(visited[child] && child!=parent){//loop found  
            return true;
            }
            else if (visited[child] && child==parent){//ye loop nahi he and ese child pe hame jump nahi karna so continue karke skip karo 
            continue;
            }
            else{
                //child not visited ho
                //dfs call karo fir
                bool call=dfsrec(child,visited,adj,node);
            }

            //child wapas backtrack karega 
            if(call==true){return true;}


        }

        


    }

    bool dfs(vector <int> &visited,int V,vector <vector <int> > adj){
        int parent=-1;
        for(int i=1;i<=V;i++){   // for disconnected components
            if(visited[i]==-1){
                if(dfsrec(i,visited,adj,parent)){return true;}
            }
        }

        return false;
    }
