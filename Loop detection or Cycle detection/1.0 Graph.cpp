DONO loop detection me dfs hi use hota he and dono me void dfs nahi but bool dfs use hoga as it returns ki cycle he ya nahi


1.undirected

    vpn ===> vnp  (visited and not parent)

 x-------x-----------x
         |           |
         |           |
         ------------x


//! CODE

bool use karte he isme

bool cycleFound(node,parent,adj,visited){
    visited[node] = 1;
    for(auto itr : adj[node]){
        if(visited[itr]==0){
            //not visited he to dfs call karo but here if() ke andar karna
            if(cyclefound(itr,node,adj,visited)){return true;}
        }
        else if (visited[itr]==1 && itr!=parent){
            return true;
        }
    }
    return false;
}





-----------------------------------------------------------------------------------------------

2. directed graph

isme (vp) visited and pathvisited dono 1 he to cycle found
ye bhi ekdum same code hi he 
univisted he to wapas dfs call karo lekin if statement ke andar
visited he tochek karo ki pathvisited bhi he kya to true karo



bool cycleFound(node,adj,visited,pathvisited){
    visited[node] = 1;
    pathvisited[node] = 1;              //!isko dekho


    for(auto itr : adj[node]){
        if(visited[itr]==0){
            //not visited he to dfs call karo but here if() ke andar karna
            if(cyclefound(itr,node,adj,visited)){return true;}
        }
        else if (visited[itr]==1 && pathvisited[itr]==1){              //!bas ittu sa change and pathvisited wale ko sahi se bactrack
            return true;
        }
    }


    pathvisited[node] = 0;        //! isko dekho
    return false;
}




OPTION 2 : for directed graph : topo sort is only applicable for DAG (directed acyclic graph)
so toposort lagra he to no cycle exists and if toposort nahi lagra to fir cycle exists