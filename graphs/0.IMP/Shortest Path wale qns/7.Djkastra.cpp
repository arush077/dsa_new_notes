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

    int node=min.top().second;
    int dist=minh.top().first;

    minh.pop();

    for(auto itr:adj[nodes]){
        int adjnode=itr[0];
        int adjdist=itr[1];

        if(d[adjnode]>dist+adjdist){
            d[adjnode]=dist+adjdist;
            minh.push({d[adjnode],adjnode});
        }


    }
    return d;

}



