#include <bits/stdc++.h>
using namespace std;

// void generator(string &s,int i,int n){
// if(i==n){
//     cout<<s<<endl;
//     return ;}

// s.push_back('4');
// generator(s,i+1,n);
// s.pop_back();

// s.push_back('7');
// generator(s,i+1,n);
// s.pop_back();


// }

int minimumEdgeReversal(vector<vector<int>> &edges,int n,int src,int dst)
        {
            //  int V=edges.size();
            vector<unordered_set<int>> v(n+1);
            vector<vector<int>> undirvectadj(n+1);

                for (int i = 0; i < edges.size(); i++){
        

        int first = edges[i][0];
        int second = edges[i][1];
        v[first].insert(second);
        
        undirvectadj[first].push_back(second);
        
        undirvectadj[second].push_back(first);
                 
      } 
      
      
      
      queue<pair<int,int>> q;
      
      
    //   node,reverse_count
    int count=0;
      vector<int> visited(n,count);
      q.push({src,count});
      visited[src]=1;
      
      
      while(!q.empty()){
          auto itr=q.front();
          int node=itr.first;
          int count=itr.second;
          q.pop();
          
          for(auto nextnode:undirvectadj[node]){
              
              
              //set dekna hoga set is in the form of v[node]
              
              
            //   unordered_set<int> s=v[node];
              if(v[node].find(nextnode)==v[node].end()){
                  //matlab it is not directed
                  count++;
              }
              
              q.push({nextnode,count});
              
              
              
              
              
              
          }
              
          }
          
          
          
          
          
          
          
          
     
                 return count;
        }



int main(){
    vector<vector<int>> edges;
    edges[1].push_back(2);
    edges[3].push_back(2);



    minimumEdgeReversal(edges,3,1,3);
    
}