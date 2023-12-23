

 TreeNode* maker(vector<int>& preorder, vector<int>& inorder,int spre,int epre,int sin,int ein){
     if(spre>epre || sin>ein){return NULL;}
     if(spre==epre){
         TreeNode* newnode=new TreeNode(preorder[spre]);
         return newnode;
     }
     else if(sin==ein){
         TreeNode* newnode=new TreeNode(preorder[sin]);
         return newnode;
     }



     int middler=preorder[spre];
     int mindex=sin;
     for(int i=sin;i<=ein;i++){
         if(inorder[i]==middler){
             mindex=i;
             break;
         }
     }


    //naya inorders
    //sin se mindex-1 tak left   so mindex-sin elements on the left
    //mindex pe right
    //mindex+1 se ein tak right  so ein-(mindex+1)+1 ie ein-mindex elements on right

    //naya preorder
    //spre pe to element he 
    //spre+1 se spre + (mindex-sin) on the left
    //remaining on right ie (spre+(mindex-sin)+1) se epre tak


    TreeNode* nnode=new TreeNode(middler);

    nnode->left=maker(preorder,inorder,spre+1,spre+(mindex-sin),sin,mindex-1);
    nnode->right=maker(preorder,inorder,(spre+(mindex-sin)+1),epre,mindex+1,ein);

    return nnode;










 }



class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return maker(preorder, inorder,0,preorder.size()-1,0,inorder.size()-1);
    }
};