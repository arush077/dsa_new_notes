//! Same concept jese Binary search me floor and ceil nikalte the bas woi karna he BST me bhi

//! As u already know BST me yaa to inorder traversal ya to Searching(Binary Searching while loop lagake karte he)


//! SUCCESSOR . Normal typical search(Binary search wala code likho and jab equality ki condition aaye to aur press kario by moving to the right to get the successor)
//! and ek naye variable me updatation karte raho to get the successor
        while(root!=NULL){
            
            if(root->key==key){root=root->right;}
            else if(root->key>key){
                
                suc=root;
                root=root->left;
            }
            else{
                
                root=root->right;
            }
        }







//! Ceil
        while(root!=NULL){
            
            if(root->key==key){root=root->left;}    //! equality pe rukh mat jaana instead press more 
            else if(root->key>key){
                root=root->left;
            }
            else{
                pre=root;
                root=root->right;
            }
        }
        
        
        
    