//! 2 methods

//! M1 : inorder traversal ek array me store karo and then us array me key ka ceil nikalo jese Binary Search me kiya tha
//! M2 : while(root!=NULL) karke same Binary Search ka ceil ka logic lagao

//! Logic arr[mid] > key he to arr[mid] is a possible ceil element so store it in a variable bas

//! M1
void inorder(BinaryTreeNode<int> *node, int x,vector <int>&ans){
    if(node==NULL){return ;}
    inorder(node->left,x,ans);
    ans.push_back(node->data);
    inorder(node->right,x,ans);
}



int findCeil(BinaryTreeNode<int> *node, int x){
    vector <int> arr;
    inorder(node,x,arr);
    //use BS to find ceil as the inorder is already sorted for a BST
    int s=0;
    int result=-1;
    int e=arr.size()-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==x){return arr[mid];}

        else if(arr[mid]>x){
            result=arr[mid];
            e=mid-1;
        }

        else if(arr[mid]<x){
            s=mid+1;
        }
    }
    return result;}




    //!M2
       int result=-1;                          
    while(node!=NULL){

        if(node->data==x){return x;}           
        
        if(node->data >x){                           //! Search in BST ke code me bas possible ceil element ko store kiya
        result=node->data;
        node=node->left;
        }

        else if(node->data<x){
            node=node->right;
        }

    }