src -------> dest jaana he to u can use dfs or bfs both as simple traverse hi karna he tumhe

//prefer bfs over dfs anytime to avoid backchodi recursion shit
//also bfs takes up less time




//normal bfs code me ek line zyada likna he bas if(node==dst){//do shit + break;}

q.insert(src,0);                                                   //!just initially push in the src node
visited[src]=1;

while(!q.empty()){
    int node = q.front();
    q.pop();

    if(node==destination){ //do this +  break;}                     //! bas itna extra karna he 

    //neighbors ko bulao
    for(auto itr: m[]){
        if(!visited){
            visited[neighbor]=1;
            q.push(neighbor);
        }
    }


}






//dfs lagana he to bc bohot bt ayegi


//recursion tips
1.//remeber whenever destination is hitting type chiz ayegi, and each state pe ek sum ayega tab ese do variables rakna 
2.//sum ka ek normal variable and ans ka ek reference variable jo ki hold karega sum ka value when destination is hit



void dfs(node,adj,visited,dst, product_at_eachstate , &ans ){        

    visited[node] = 1;

    if( node == dst ){                                               //! jab destination hit hua tab return karna dfs se toh
        ans = product_at_eachstate;
        return ;
    }


}

