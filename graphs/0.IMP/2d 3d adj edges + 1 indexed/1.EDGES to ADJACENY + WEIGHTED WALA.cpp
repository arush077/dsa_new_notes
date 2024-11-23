// ! very important ye hi ki adjacency list ki size define karo pehle to atleast ek size 
vector<vector<pair<int,int>>> adj  -----> segmentation fault dega
vector<vector<pair<int,int>>> adj(V) ---> koi bt nahi dega


//

//! BAS YE DO CHIZ YAAD RAKNA
//! 1. weightless : vector<vector<int>> adj(n);
//! 2. weighted   : vector<vector<pair<int,int>>> adj(n);

//! Weightless wala
edges[]={{1,2},{3,1}}; //! matlab 1--2 and 3--1 so 3--1--2 is the graph
adj[]={{},{2,3},{1},{1}}; 

for(int i=0;i<edges.size();i++){
    int f=edges[i][0];
    int s=edges[i][1];
    adj[f].push_back(s);
    adj[s].push_back(f);
}


//! Weighted wala
edges[]={{1,2,10},{3,1,6}};   //!weighted wala in edges can still be shown in 2D array
adj[]={{{}},{{2,10},{3,6}},{{1,10}},{{1,6}}};     

//! MOST IMP IS KI (((2Dvector + pair<int,int> ))) hoga adj list me // REMEMBER THIS


vector<vector<pair<int,int>>> adj(V) OR vector<pair<int,int>> adj[V];

for(int i=0;i<edges.size();i++){
    int f=edges[i][0];
    int s=edges[i][1];
    int d=edges[i][2];

    adj[f].push_back({s,d});
    adj[s].push_back({f,d});

}


---------------------------------------------------------------------------------------------------------------------

2d maps

https://leetcode.com/problems/evaluate-division/description/?envType=study-plan-v2&envId=top-interview-150

kabhi kabhi jab nodes ese numbers na ho rather node "a" ho aur node "b" ese nodes ho tab vector use karna can get tough

//maps usually weighted walo me hi use hote he 
//2d maps rather

jese weighted me hum vector<vector<pair<int,int>>> adj use karte wese map me 

unordered_map < string , unordered_map < string , int > > m
                

                // s1                       s2     d

//matlab s1 to s2 jaana he to fir d lagega weight
//also m[s1][s2] = d karsakte 2d map me
















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


---------------------------------------------------------------------------------------------------


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












