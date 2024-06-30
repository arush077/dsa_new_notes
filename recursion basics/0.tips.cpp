1. 2 variable tip (one normal and one reference) for when the destination is hit


//recursion tips
1.//remeber whenever destination is hitting type chiz ayegi, and each state pe ek sum ayega tab ese do variables rakna 
2.//sum ka ek normal variable and ans ka ek reference variable jo ki hold karega sum ka value when destination is hit



void dfs(node,adj,visited,dst, product_at_eachstate , &ans ){        

    visited[node] = 1;

    if( node == dst ){                                               //! jab destination hit hua tab return karna dfs se toh
        ans = product_at_eachstate;
        return ;
    }

    for(auto itr : ){
        if(neighbor not visited){
            dfs(neighbor,adj,viisted,product_at_eachstate*10,ans);
        }
    }

}

----------------------------------------------------------------------------------------------------------------------
2. jab ek bhi true ho to pura true kardo ya jab ekbhi false ho tab pura false kardo


// isme simple hota he ki child call ko if statment me pack kardo


//this is for ek bhi true he to pura true karde bhai
bool f(i){

if( f(i+1) ){return true;}
return false;

}