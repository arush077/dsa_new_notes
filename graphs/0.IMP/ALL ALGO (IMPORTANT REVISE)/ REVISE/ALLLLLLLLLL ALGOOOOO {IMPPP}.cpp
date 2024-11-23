FBD==> ye saare shortest distance wale he // FLoyd Warshall, Bellman Ford, Djkastra
Djkastra==> min dist from a src(one node) to all the nodes ==> VlogV same as nlogn as priority queue ya fir min heap use karte he isilie sorting ki time complexity aati he
BellmanFord=> Bellman same as Djkastra from one node to all the nodes ka min distance but negative edges allowed => O(v*e)
bfs in finding shortest distance == bfs works on undirected and unit weight graphs only || also minimum no of steps type of qns me to bfs is the best
Floyd Warshall=>Floyd gives you shortest pair between every 2 pair of vertices and negative edges are allowed => O(V^3) => because every loop across every vertice and every vertice par pura 2d vector check hoga so v*v^2




BFS       ----------   DFS
Dijkastra ----------   BellmanFord

        Floyd Warshall
        Topological Sort







Dijkastra vs BFS
//If All Weights Are Equal: BFS is faster and simpler
//If Weights Are Different : Dijkstra’s 


//! Negative weights pe dijkastra will fail
//! Negative weights pe Bellman ford will work


Summary Table
| Algorithm       | Time Complexity         | Space Complexity |
|-----------------|-------------------------|------------------|
| **BFS**         | O(V + E)                | O(V+E)           |
| **DFS**         | O(V + E)                | O(V+E)           | qns : used to find cyclicity of directedgraphs(v and pv should be true) and undirected graphs(visited and not parent)
| **Dijkstra**    | O((V + E) log V)        | O(V+E)           | BFS | minheap | dist array | no visited | qns : network
| **Bellman-Ford**| O(V * E)                | O(V+E)           |
| Floyd-Warshall  | O(V^3)	            | O(V^2)           |
| Topological     | O(V+E)                  | O(V+E)           | BFS | queue   | indegree | no visited |  DAG (directed acyclic graph only) qns: used to find the cyclicity of directed graphs | qns : course schedule




Space complexity is O(V+E) for all -------> adjacency list is always of O(V+E)
// only in floyd-warshall you will have O(V^2) as SC