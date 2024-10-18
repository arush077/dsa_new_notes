//normal template
int f(node){
    if(node==NULL){return 0;}

    int l=
    int r= 
    return max(l,r)
}


//so this is a maximizing height ka problem and u need to make sure it reaches the leaf only
int f(node){
    if(node==NULL){return -1e9;}   //ditch this boi with minimum no as its maximum ka qn
    
    if(node->left==NULL && node->right==NULL){return 1;}   //write a case for the leaf

    int l=
    int r= 
    return max(l,r)
}
