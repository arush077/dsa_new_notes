good qn to practise
https://leetcode.com/problems/network-delay-time/


//!single src se all the nodes tak ka min distance
//! visited array ke badle distance array jisme saare inf se initialized ho
//! here agar visited array nahi he to undirected me how will you know when to end ======== simple after it has an array with all the shortest path or the most optimal array then it will stop automatically
//! use priority queue
//! if(d[u]+w(u,v)<d[v]){d[v]=d(u)+d(u,v)}
//! Djkastra algo is not suitable for negative edges


//!Djkastra use priority queue ya fir minheap

//! USE CASE : single src se all the nodes tak ka minimum ditance nikalo


//! BFS hi essentialy lagare ho with 2 changes 1.priority queue use karo 2.visited array ke badle distance arr use kar

//! USE : when weighted graph is given , unit weight graph to BFS se ho jaega


//! why not queue
//! because queue will try all the possible paths while minheap will take only the shortest path
//! reduces TC

//! minh me put {0,src} why ?  first is the dist and second is the src so src se dist to 0 hi hoga
//! Djkastra returns a dist array having distance of all indexes from the src node
//! Djkastra is O(nlogn)




priority_queue <pair<int,int>,vector <pair<int,int>>,greater <pair<int,int>>> minh;
minh.push({src,0});

vector <int> dis(N,INT_MAX);                                           //! intially saare distances ko inf kardo
dis[src]=0;


while(!minh.empty()){

    int node=min.top().second;      //being careful the minh has first element as distance and not node
    int dist=minh.top().first;

    minh.pop();

    for(auto itr:adj[nodes]){
        int adjnode=itr[0];         //being careful the adj list has first element as node and not distance
        int adjdist=itr[1];

        if(d[adjnode]>dist+d[node]){
            d[adjnode]>dist+d[node]
            minh.push({d[adjnode],adjnode});
        }

    }



    return d;

}



