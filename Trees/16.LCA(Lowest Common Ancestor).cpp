https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1

//! BRUTE FORCE
TC:O(n)
SC:O(n)

//simply root se node1 ka path nikalo and store in ans1 
//also   root se node2 ka path nikalo and store in ans2

then compare the 2 arrays where u find the rightmost common element  wo ans hoga

eg:
ans1: 1 2 4 3 5
ans2: 1 5 4 3 2 
so 1 is also the common ancestor but 3 is the lowest common ancestor






    bool inorder(Node* root,int key,vector <Node*> &ans){
        if(root==NULL){return false;}
                                                                                //! CODE TO FIND PATH FROM ROOT TO NODE see C13.
        if(root->data==key){
            ans.push_back(root);
            return true;
        }
        
        ans.push_back(root);
        bool lc=inorder(root->left,key,ans);
        bool rc=inorder(root->right,key,ans);
        
        if(lc || rc){return true;}
        
        ans.pop_back();
        return false;   
    }
    
   
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
        vector <Node*> ans1,ans2;
        inorder(root,n1,ans1);
        inorder(root,n2,ans2);
        
        Node *ans;
        for(int i=0;i<min(ans2.size(),ans1.size());i++){
            if(ans1[i]==ans2[i]){ans=ans1[i];}
        }
        
        
        return ans;
       
    }




//! Efficient recursive solution
//if you find node1 or node2 then return a true warna return a false,null node he to return false

