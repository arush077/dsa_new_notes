//! BST wale qns recursion se chote ho jaate he

//! BST KA STANDARD TEMPLATE LIKE BINARY SEARCH
Node* delete(node,key){
    if(node==NULL){return NULL;}
    if(node->val==key){
        (niche dekna in sab cases ke alag alag codes likhe he)
        //0 child he jis node ko delete karna he uska

        //1 child he jis node ko delete karna he uska

        //2 child he jis node ko delete karna he uska
    }

    else if (node->val<key){
        node->right=delete(node->right);
    }

    else{
        node->left=delete(node->left);
    }

    return root;                              //! YE MAT BHULNA BST ME
}




//! Cases jab root->val==key hoga to 

//0 child wala
if(root->left==NULL && root->right==NULL){return NULL;}


//1 child wala
if(root->left==NULL && root->right!=NULL){
    Node* temp=root->right;
    delete root;
    return temp;
}

else if (root->left!=NULL && root->right==NULL){
    Node* temp=root->left;
    delete root;
    return temp;
}


//2 child wala
if(root->left!=NULL && root->right!=NULL){
    int rightmin=rightmin(node->right);
    node->val=rightmin->val;                            //!Right min ki value copy maro node me
    node->right=delete(node->right,key);                //! Right min wale ko find karke delete marna ab ye kaam recursion par chod dena aur jo bhi ayega usko node->right me store karna          
    return node;                                        //! Vimp last step 
}