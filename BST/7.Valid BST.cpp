https://leetcode.com/problems/validate-binary-search-tree/

//!2 methods 

1.Inorder Traversal must be in ascending order simply

void f(node,vector <int> &ans){
    if(node==NULL){return ;}
    f(node->left);
    ans.push_back(node);
    f(node->right)
}
then simply check if ans is in ascending order or not





2. Recursive Approach without using extra space and using range variables
 bool isValid(TreeNode *root,long long mini,long long maxi){
        if(!root)return true;
        if(root->val>mini && root->val<maxi){
        bool left=isValid(root->left,mini,root->val);
        bool right=isValid(root->right,root->val,maxi);    
            return left && right;
        }
        else{
        return false;
        }
    }

    bool isValidBST(TreeNode* root) {
        long long mini=LONG_MIN,maxi=LONG_MAX;
        return isValid(root,mini,maxi);
    }

//!see drawio file very intuitive solution


