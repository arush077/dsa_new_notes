https://www.geeksforgeeks.org/problems/maximum-sum-of-non-adjacent-nodes/1


//! CONCEPT
//u can take that thing
//u can nottake that thing

//if u take it then now u can only the grandchildren nodes(node->left->left,node->left->right , node->right->left,node->right->right)
//if u dont take it then u can take the children nodes (node->right,node->left)

















//IDEA
int getmaxsum{

if(root==NULL){return 0;}

int take=root->value;
take+=getmaxsum(node->left->left);
take+=getmaxsum(node->rleft->right);
take+=getmaxsum(node->right->left);
take+=getmaxsum(node->right->right);


int nottake=0;
nottak+=getmaxsum(node->left);
nottak+=getmaxsum(node->right);


return max(take,nottake);
}




//ACTUAL CODE
int getmaxsum{

if(root==NULL){return 0;}

int take=root->value;
if(node!=NULL && node->left!=NULL) take+=getmaxsum(node->left->left);
if(node!=NULL && node->left!=NULL)take+=getmaxsum(node->left->right);
if(node!=NULL && node->right!=NULL)take+=getmaxsum(node->right->left);
if(node!=NULL && node->right!=NULL)take+=getmaxsum(node->right->right);


int nottake=0;
if(node!=NULL) nottak+=getmaxsum(node->left);
if(node!=NULL) nottak+=getmaxsum(node->right);


return max(take,nottake);
}