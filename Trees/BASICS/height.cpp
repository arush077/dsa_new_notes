//! IMP : ki int l and int r karke left and right heights nikalo


//Maximum height
int f(root){
    if(root==NULL){return 0;}
    int l=f(root->left);
    int r=f(root->right);
    return 1 + max(l,r);
}

//Maximum Width or Max dist b/w 2 nodes
int f(root,int &maxi){
    if(root==NULL){return 0;}
    int lh=f(root->left);
    int rh=f(root->right);
    maxi=max(maxi,lh+rh+1);
    return 1 + max(lh,rh);
}



//Maximum Sum Path in a Tree
int f(root){
    if(root==NULL){return 0;}
    int ls=f(root->left);
    int rs=f(root->right);
    return root->val + max(ls,rs); 
}


//Max sum b/w any 2 points in a Tree
int f(root,int &maxi){
    if(root==NULL){return 0;}
    int ls=f(root->left);
    int rs=f(root->right);
    maxi=max(maxi,ls+rs+root->val);   //! Curveball found him
    return root->val + max(ls,rs);    //! Non curveballers 
}


