//! bfs in finding shortest distance == bfs works on undirected and unit weight graphs only
//! MARK visited inside the neighbors wala for loop just after pushing it in the queue


queue<int> q;
vector<int> visited;

q.pudh(0);
visited[0]=1;

while(!q.empty()){
    int top = q.front();

    q.pop();
    //!DONT MARK VISITED HERE

    for(iterate over neighbors){
        q.push(neighbor)
        //! MARK VISITED HERE
        visted[neighbor] = 1;
    }

}



-----------------------------------------------------------------------------------------------
//! problems

1. rotten oranges
2. min no of steps to 
3. word ladder matlab ek word ko dusre word me banao changing one letter at a time such that all intermediate words lie in dictionary
4. shortest path with unit distances (//!VIMP) shortest path ya minimum no of steps = 100% bfs lagega hi lagega
