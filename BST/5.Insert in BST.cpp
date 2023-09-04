
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

    
