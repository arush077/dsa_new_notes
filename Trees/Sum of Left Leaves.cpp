/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int preorder(TreeNode* root,int leftc){
        if(root==NULL){return 0;}

        if(root->left ==NULL && root->right==NULL){
            //leaf node is reached
            //check if it came from left or not
            if(leftc==1){
                return root->val;
            }
        }


        int leftz = preorder(root->left,1);
        int rightz = preorder(root->right,0);
        return leftz+rightz;

    }


    int sumOfLeftLeaves(TreeNode* root) {
        //left node is a leaf node but its only when parent called for left
        return preorder(root,0);
    }
};