qns to solve 

1. Course-Schedule
https://leetcode.com/problems/course-schedule/description/


TOPOLOGICAL SORT also known as KAHNS algorithm

when tasks have to be performed in a particular order
it only works on DAG (directed acyclic graphs) only
to order dega wo tumhe as a result ... WOW!!!

//also isme starting node nikalna hoga as there is an order
// start from the nodes where indegree = 0

//neighbors ke indegree kam karna and if indegree is 0 then push in the q
// aur queue me push karte waqt indegree ko ek kam karte jaana

// beacuse when node gets popped tab indegree of neighbor also redues by 1

//! toposort me no need of visited vector only indegree vector needed

vector<int> indegree(V,0);
for(int i=0;i<adj.size();i++){
    for(int j=0;j<adj[i].size();j++){
        indegree[ adj[i][j] ]++;
    }
}

queue<int> q;
for(int i=0;i<indegree.size();i++){
    if(indegree[i]==0){q.push(i);}
}

while(!q.empty()){
    int node = q.front();
    q.pop();                             //pop hua node yaha to uske neighbor ke piche wala ek kam hua to essentially indegree reduce by 1

    ans.push_back(node);

    for(auto itr : adj[node]){
        indegree[itr]--;
        if(indegree[itr]==0){q.push(itr);}
    }
}

