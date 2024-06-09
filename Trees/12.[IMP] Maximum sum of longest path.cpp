https://practice.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1

//!Now this is not a curveball concept (curveball tab karo only when between 2 points ka pucha ho tab)
//! yaha u need to reach the null from the root and in saare possibilities me se sabse lambe wale ka sum return karna he
//! USE INORDER TRAVERSAL  int &sum | int &maxisum | int count | int &maxicount  :
//concept ye he ki count can be passed as a recursion variable where in each call u can increament count
//but all remainginin variables ko pass by reference

inorder
f(node){
    if(node==NULL){return ;}
    f(node->left);
    f(node->right);
    //since its a void fn left and right calls ke baad kuch nahi return karna hoga
}


//! PASSING BY REFERENCE IN RECURSION KA FULL CONCEPT SOLVED SEE IN DRAWIO



//! Remember this concept as node par aakar runsum method jab node pe aake reference variables ki lete ho




void inorder(Node* root,int &sum,int count,int &maxisum,int &maxicount){
    if(root==NULL){
        if(maxicount<count){
            maxicount=count;                                             //! agar you get a count bigger than the last time then reupdate the maxicount and maxisum=ye wala sum
            maxisum=sum;
        }
        else if(maxicount==count){
            maxisum=max(maxisum,sum);                                   //! count was similar to the previous maxicount then we will take the sum which was maximum
        }        
        return ;                                                        //! Vimp step to return 
    }
    sum+=root->data;                                                    //!this is not a recursion variable so its passed be ref and also while backtracking u need to handle it properly
    inorder(root->left,sum,count+1,maxisum,maxicount);
    inorder(root->right,sum,count+1,maxisum,maxicount);
    sum-=root->data;                                                     //! while going back u need to get back the sum of that node back so need to subtract it
}





so vimp sum nikalna he agar inorder lagakar to ye template hoga
f(node,&sum){
if(root==NULL)

sum+=root->val;

inorder(root->left,sum);
inorder(root->right,sum);

sum-=root->val;

}

