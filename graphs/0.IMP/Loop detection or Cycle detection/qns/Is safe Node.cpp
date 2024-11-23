//deadlock type qn he ye 

https://leetcode.com/problems/find-eventual-safe-states/

//! rattlo ki pv = true he matlab cycle he uss node par, (as pv is a vector) so har node ka bolega ki ye particular node kisi cycle me fasa he ya nahi types


class Solution {
public:


    bool checkCycle(int node,vector<vector<int>>& graph,vector<bool> visited,vector<bool> &pathvisited ){

        visited[node] = true;
        pathvisited[node] = true;

        for(auto itr : graph[node]){
            if(!visited[itr] && checkCycle(itr,graph,visited,pathvisited)){
                //then push the decision on the next call
                return true;
            }
            else if(visited[itr]== true && pathvisited[itr]==true){
                return true;
            }
        }

        pathvisited[node] = false; // while backtracking set this back to false
        return false;

    }


    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
    int number_nodes = graph.size();
    vector <bool> visited(number_nodes);
    vector <bool> pathvisited(number_nodes);

    for(int i=0;i<number_nodes;i++){
        if(!visited[i]){
        checkCycle(i,graph, visited, pathvisited);}
    }


    vector<int> safestates;

    // jo jo bhi pathvisited me honge they all will be the safe states

    // pathvisited must ideaally be false
    // but the guys who failed to backtrack will be true only 
    // the ones who failed to backtrack reached the final terminal state
    

    // pv = true he matlab cycle hoga hi hoga 



    for(int i=0;i<number_nodes;i++){
        if(pathvisited[i]==false){
            safestates.push_back(i);
        }
    }

    return safestates;


    }
};