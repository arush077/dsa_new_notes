https://practice.geeksforgeeks.org/problems/maximum-path-sum-from-any-node/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

//! Tree me sum puche to by ref variable bana dena
//! Tree me count puche to recursion ke lie normal variable bana dena 

//! Although count iss qn me nahi chahiye but still
//! CONCEPT OF SUM AND COUNT


f(node,int &sum,int count){

    lc=(node->left,sum,count+1);
    sum+=node->val;
    rc=(node->right,sum,count+1);
}


//!Back to qn

int summer(node,int &maxi){
if(node==NULL){return 0;}                          //! base case as usual for root=NULL

int ls=max(0,summer(node->left,maxi));                    //!leftsum      inko max(0,f call) kiya he taaki agar left ya right call ka sum negative ho to unsabko naahi consider kare and 0 return kare to behtar he by not calling them
int rs=max(0,summer(node->right,maxi));                   //!rightsum

maxi=max(maxi,ls+rs+root->val);                    //!maxi update maxi me we are considering the best curveball

return root->val + max(ls,rs);                     //!Vimp step ki non-Null elements ke lie kya return kare ?  obv ls+rs+root->val to nahi 
                                                   //!Only curveball will have left and right but non curveballs can have either left or right                                                               

}


//! Remember this is very similar to max width of the tree





