bool inorder(node* root,vector <int>&ans,int key){
    if(root==NULL){return false;}
    if(root->data==key){
        ans.push_back(root->data);
        return true;}
    
    ans.push_back(root->data);
    bool lc=inorder(root->left,ans,key);
    // for(auto itr:ans){
    //     cout<<itr<<" ";
    // }
    cout<<endl;
    bool rc=inorder(root->right,ans,key);
    
    if(lc || rc){return true;}

    ans.pop_back();
    
    return false;
    
}
