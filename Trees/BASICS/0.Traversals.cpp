// Traverals


----------------------------------------------------
inorder
    void inorder(TreeNode* root,vector<int> &ans){
        if(root==NULL){return ;}

        //you are at that node

        inorder(root->left,ans);
        ans.push_back(root->val);       
        inorder(root->right,ans);

    }
----------------------------------------------------

preorder
    void inorder(TreeNode* root,vector<int> &ans){
        if(root==NULL){return ;}

        //you are at that node                              //this preorder ========= dfs in graphs 

        ans.push_back(root->val);  
        inorder(root->left,ans);     
        inorder(root->right,ans);

    }
----------------------------------------------------


postorder
    void inorder(TreeNode* root,vector<int> &ans){
        if(root==NULL){return ;}

        //you are at that node                           //dp usually postorder hota he as take ka call then nottake ka call and then return take,nottake so last me return kiya so dp bhi yahi he

        
        inorder(root->left,ans);     
        inorder(root->right,ans);
        ans.push_back(root->val);  

    }
----------------------------------------------------


all root to leaf print

//use dfs when you want this + backtracking in dfs



if(root==NULL){
    return ;
}

if(root->left==NULL && root->right==NULL){
    temp.push_back();
    //do wwhat you wana do
    temp.pop_back();
    return;
}

temp.push_back();
dfs(root->left,ans);                  //yaha pe jese ki tum take karrahe ho left and right nodes
dfs(root->right,ans);
temp.pop_back();                      //jab iss wale node se nikalne ki baari aayi tab pop_back kardiya

-----------------------------------------------------