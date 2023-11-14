https://leetcode.com/problems/kth-smallest-element-in-a-bst/submissions/


//! V Easy bas inorder traversal karo and then ans me store karke return arr[k-1]

 void inorder(TreeNode* root,vector <int>& ans){
        if(root==NULL){return ;}
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }




    int kthSmallest(TreeNode* root, int k) {
        vector <int> ans;
        inorder(root,ans);
        return ans[k-1];
    }



    //! Space ko kam karna he agar without using a vector and using a variable instead (see drawio)
     void inorder(TreeNode* root,int count,int &ans){
        if(root==NULL){return ;}
        inorder(root->left,ans);
        
        count--;
        if(count==0){ans=root->val;}

        inorder(root->right,ans);
    }




//! Kth largest pucha hoga to
since inorder moves from smallest to largest so finding kth smallest is easy
so kth largest is essentially (n-k+1)th smallest