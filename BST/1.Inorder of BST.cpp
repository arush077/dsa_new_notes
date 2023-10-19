https://www.codingninjas.com/studio/problems/binary-search-trees_8160443?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

//! CONCEPT : Inorder Traversal of a BST would always be in increasing Order

//! so if someone asks to find minimum element of BST it would simply be the arr[0] of inorder
//! maximum element of BST would be simply inorder[n-1] or last element of inorder Traversal

void inorder(node){
    if(root==NULL){return ;}
    inorder(root->left);
    ans.push_back(root->val);
    inorder(root->right);
}