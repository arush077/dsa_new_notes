//! IMP : ki int l and int r karke left and right heights nikalo


//Maximum height
int f(root){
    if(root==NULL){return 0;}
    int l=f(root->left);
    int r=f(root->right);
    return 1 + max(l,r);
}

//Maximum Width or Max dist b/w 2 nodes
int f(root){
    if(root==NULL){return 0;}
    int lw=f(root->left);
    int rw=f(root->right);
    return 1 + max(lw,rw);
}


//Maximum Sum Path in a Tree
int f(root){
    if(root==NULL){return 0;}
    int ls=f(root->left);
    int rs=f(root->right);
    return root->val + max(ls,rs); 
}
