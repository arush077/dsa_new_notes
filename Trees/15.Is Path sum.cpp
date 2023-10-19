//! again same C.13 ka concept
https://practice.geeksforgeeks.org/problems/root-to-leaf-path-sum/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab






 bool ispath(Node *root,int &sum,int gsum){
        if(root==NULL){return false;}                                            //! null par return false;

        if(root->left==NULL && root->right==NULL){                               //! leaf node ka alag se kiya he
            sum+=root->data;                                                     //! on entering leaf node u need new sum
            
            if(gsum==sum){
                // cout<<root->data<<sum<<endl;                                  //! agar sum equal hua to return tru no backtracking
            return true;}
            
            else{
                //backtrack and return false;                                    //! agar nahi hua to return false and also backtrack the array
                sum-=root->data;
                return false;}
            
        }
         
        sum+=root->data;                                                          //!non null and non leaf nodes ke lie pehle enter karte hi sum ko update
        bool lc=ispath(root->left,sum,gsum);                                      //!left and right calls
        
        bool rc=ispath(root->right,sum,gsum);
        
        
        if(lc || rc){                                                              //! koi bhi call tru ho to no backtracking sidha return tru
            //wont back track now, just return a tru
            return true;
        }
        
        else{
            //backtrack and return false;
            sum-=root->data;                                                        //! agar dono calls false ho to backtrakck and then return false;
            return false;
        }
        
        
    }
    
    
    
    bool hasPathSum(Node *root, int S) {
        int sum=0;
    return ispath(root,sum,S);
}