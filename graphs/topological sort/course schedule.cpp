class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {

//! Simplem basic standard Topo Sort lagana he [1,0] matlab 0 comes before 1 so edges wala jo array given he usme [1,0] === 0-->1  so adj[s].push_back(f) matlabm adj[0].push_back(1) or 0-->1



        int nodes=numCourses;
        vector <int> indegree(nodes,0);
vector <vector <int>> adj(nodes);
for(int i=0;i<prerequisites.size();i++){
    int f=prerequisites[i][0];                      //! Making my new adj list
    int s=prerequisites[i][1];

    adj[s].push_back(f);

}


for(int i=0;i<adj.size();i++){                     //! Filling the indegree
    for(auto itr:adj[i]){
        indegree[itr]++;
    }
}

queue <int> q;

for(int i=0;i<indegree.size();i++){
    if(indegree[i]==0){                           //! indegree jinka bhi 0 ho unko start me q me dal
        q.push(i);
    }
}

vector <int> ans;
while(!q.empty()){
    int temp=q.front();                             //! Basic toposort ki indegree kam karo and
    q.pop();                                        //! agar 0 hojae indegree to push into q
    ans.push_back(temp);


    for(auto adjnode : adj[temp]){                 //! Neighbors analyze karo
        indegree[adjnode]--;
        if(indegree[adjnode]==0 ){
            q.push(adjnode);
        }


    }




}

vector <int> empty;
if(ans.size()!=nodes){return empty;}                     //! Boundary case aara tha on submitting
return ans;                                              //! ki agar what is there is a 2 way 
                                                         //! b/w 1 and 0 0->1 and 1->0 so this case 
                                                         //! me return empty array




    }
};