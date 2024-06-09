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



//Maximum Sum Path in a Tree from root to NULL;
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


concept: max height and max sum root node se null tak ki dekhi jaati he jo standard code aati he 
                                and
         max height and max sum between any 2 nodes are just tweaked versions of max sum/height from root to null (tweak=introduce a new by refernce ans variable which takes into account the curveball concept)



//!root to leave traversal(VIMP)

//isme simply tumhe root se har leaf tak ka path chahiye hoga 
//simply use preorder+backtracking


               2      

            1      3 
 
          4   5



                      2(2)      

            1(2,1)               3(3,2) 
 
          4(2,1,4)   5(2,3,5)

//so every node ke associated u have a vector stored into it 
//code
void preorder(node,vector&v){

if(root==NULL){return ;}

else if (root->left==NULL && root->right==NULL){
    //jo bhi karna he karo after you reach leaf
    //but remeber to follow pattern of backtracking
    v.push_back(root)
    //jo karna he kar
    v.pop_back();
    return ;
}



//real code
v.push_back(root)
preorder(left)
preorder(right)
v.pop_back();
//real code done

}

//when u enter a node put it in array and then call for left and right and while leaving the node pop it from array

//! BALANCED BINARY TREE
//difference of heights b/w the right and the left subtree>=1 for all nodes then return true

//simple he just modify the height ka function : start me ek ans=true naam ka variable send karna aur jaha bhi bt ho iss variable ko false mar dena

    int height(TreeNode* root,bool &ans){
        if(root==NULL){return 0;}

        else{
            int left=height(root->left,ans);
            int right=height(root->right,ans);
            
      //-------------extra chunk---------------------------------      
            if(abs(left-right)>1){                                
                ans=false;                                       
            }                                                      
    //------------------------------------------------------------

            return 1+max(left,right);
        }
    }



//! CREATION OF A BINARY TREE FROM A GIVEN ARRAY
//yaad rakho ki [1,2,3,4,5] take 2 pointers taaki left and right calls ke lie arrays ko sahi se splitup kar paao
    [1,2,3,4,5]
     i       j

// VIMP : ab pure time ese maanke chalo ki 0 aur n-1 ends nahi balki i and j are the ends of the matrix

f( i , j , arr){

if(i==j){
    make node having value arr[i]
    return node;
}

//make root node lets say root node occurs at x
//root->left = f(i, x-1 );                          //yaha pe check karo kabhi kabar out of bounds jaa sakte he ye indexes but here bounds will be (i,j) lol
//root-> right = f( x+1 , j);
//return root


}