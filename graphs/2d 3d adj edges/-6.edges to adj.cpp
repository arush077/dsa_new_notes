// ! very important ye hi ki adjacency list ki size define karo pehle to atleast ek size 
vector<vector<pair<int,int>>> adj  -----> segmentation fault dega
vector<vector<pair<int,int>>> adj(V) ---> koi bt nahi dega




//! stupid gfg qns : test case me hi input ka format chupate he 


TEST CASE
N=3
M=2
edges[][]={{1,2},{3,2}}
src=1
dst=3


INPUT:
3 2
1 2
3 2
1
3


3 2---->N M
1 2---->edge
3 2---->edge
1  ---->src
3  ---->dst
















//! Weightless wala
edges[]={{1,2},{3,1}}; //! matlab 1--2 and 3--1 so 3--1--2 is the graph
adj[]={{},{2,3},{1},{1}}; 
//! matlab ***adj is actually considering the index as the first node***
//!0 index does not have any neighbor,
//!1 index has 2 and 3 as neighbor  1---2 and 1--3 so 3--1--2
//! 2 index has 1 as neighbor  3--1--2 can already see it 
//! 3 index has 1 as neighbor  3--1--2 can already see it 

for(int i=0;i<edges.size();i++){
    int f=edges[i][0];
    int s=edges[i][1];
    adj[f].push_back(s);
    adj[s].push_back(f);
}


//! Weighted wala
edges[]={{1,2,10},{3,1,6}};   //!weighted wala in edges can still be shown in 2D array
adj[]={{{}},{{2,10},{3,6}},{{1,10}},{{1,6}}};      //! adj has to be 3d vector which stores pairs so vector <vector <pair<int,int>>> adj;
//! 0 ka to koi neighbor hi nahi
//! 1 is connected to 2 at dist of 10
//! 1 is also connected to 3 at dist of 6
//! 2 is connected to 1 at dist of 10
//! 3 is connected to 1 at dist of 6

//! MOST IMP IS KI (((2Dvector + pair<int,int> ))) hoga adj list me

vector<vector<pair<int,int>>> adj(V) OR vector<pair<int,int>> adj[V];

for(int i=0;i<edges.size();i++){
    int f=edges[i][0];
    int s=edges[i][1];
    int d=edges[i][2];

    adj[f].push_back({s,d});
    adj[s].push_back({f,d});

}


//! MOST IMP POINT 
//while defining adj list 
// vector <vector <int>> adj;  //! WRONG
// vector <vector <int>> adj(V) //! Correct
//! because baadme u need to acess adj[f] and adj[s] so u need to define no of vertices

//! simple chiz yaad rakho bfs dfs me jabhi bhi neighbors pe jaoge
//! non weigthted
for(auto itr:adj[node]){
    int node=itr;
}