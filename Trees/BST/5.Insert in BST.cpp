//!Iterative Approach
    TreeNode* insertIntoBST(TreeNode* root, int val) {    
    TreeNode* parent=root;
    TreeNode* head=root;
    TreeNode * temp= new TreeNode (val);

    if(head==NULL){return temp;}            //! Boundary condition
    int count=0;
    while(root!=NULL){                      //! root==Null hoga to out hoga is loop se
        parent=root;                        //! store parent before moving left or right

        if(val>root->val){
            root=root->right;
            count=1;                      //! agar last me right wala NULL hit hua toh count=1
        }
        else{
            root=root->left;              //! agar last me left wala Null hit hua to count=0
            count=0;
        }


    }

    if(count){
        parent->right=temp;
    }
                                                      //! left ya right Null hit hua uske according insert karna
    else{
        parent->left=temp;
    }


    return head;


    }

    


//! Recursive Approach (shorter but iterative will be preferred as it will take up less auxillary stack space)

Node* Insert(Node* node,key){

if(root==NULL){
    Node* newnode= new Node(key);
    return key;
}



if(key==root->val){return root;}             //! ekdum Binary search ki tarah only one diff is ki pehle check if root==NULL warna move left or right accordingly

if(key>root->val){
  // Insert(node->right,key);                //! ye wrong hoga (matlab ye void function to he nahi ki bas ese hi call mardiya)
    node->right=Insert(node->right,key);     //! ye sahi hoga   (ye ek type ka )
}

else{
    node->left=Insert(node->left,key);
}
 

return root;                                 //! VIMP STEP!!! 

}