//https://www.hackerrank.com/challenges/journey-to-the-moon/problem
//main concept: agar kabhi bhi gucha banana ho to fir we use dfs to connect the things together VVVVVVIMPPPPPPP








void dfs(int node,vector<vector<int>>&adj,vector<int> &visited,int &count){ 
    count++;
    visited[node]=1;
    cout<<"dfs ke andar"<<node<<" "<<count;
    //neighbors
    for(auto itr:adj[node]){
        if(!visited[itr]){
            dfs(itr,adj,visited,count);
        }
    }
}



long long fact(int n){
    if(n==0 || n==1){return 1;}
    return n*fact(n-1);
}



long long f(int n,int r){
    return (fact(n)/(fact(r)*fact(n-r)));
}



long long journeyToMoon(int n, vector<vector<int>> astronaut) {
vector<vector<int>> adj(n);
for(int i=0;i<astronaut.size();i++){
    int f=astronaut[i][0];
    int s=astronaut[i][1];
    //ek undirected graph banao to connect all the people of the same country
    adj[f].push_back(s);
    adj[s].push_back(f);
}

int count=0;
vector<int> visited(n,0);

long long total_possible=f(n,2);

for(int i=0;i<n;i++){
    //har node par dfs if unvisited
    if(visited[i]==0){
        cout<<"dfs calling for node"<<i<<endl;
    dfs(i,adj,visited,count);
    
    //ye ek guche ka count he, matlab ek guche me kitne log he ie ek country ke no of people
    
    cout<<"dfs se bahar and now count:"<<count<<endl;
    if(count==1){total_possible=total_possible-0; }
    else{total_possible=total_possible-f(count,2);} 
    
    
    
    }
    count=0;
    
}




