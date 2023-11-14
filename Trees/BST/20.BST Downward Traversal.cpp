https://practice.geeksforgeeks.org/problems/bst-downward-traversal--170646/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

//Pehle target node ko find kiya uske baad simply usko store kiya targetnode me
//targetnode milne ke baad target node ka x=0 agar left me jaoge to left=-1 and right me jaoge to x=+1 esa system fix kiya
//to agar target node ke exact niche aara he to uska x bhi 0 hi aana chahiye and thus we can say ki jiska bhi x=0 he to wo uske vertically niche par lie karega





    void finder(Node *root,int target,Node* &targetnode ){
        if(root==NULL){return ;}
        if(root->data==target){targetnode=root;}
        finder(root->right,target,targetnode);
        finder(root->left,target,targetnode);
    }


    void leveler(Node *root,int x,int &sum){
        if(root==NULL){return ;}
        
        if(x==0){sum+=root->data;}
        
        leveler(root->left,x-1,sum);
        leveler(root->right,x+1,sum);
        
        
    }


    long long int verticallyDownBST(Node *root,int target){
        Node* targetnode=NULL;
        int sum=0;
        finder(root,target,targetnode);
        if(targetnode==NULL){return -1;}
        leveler(targetnode,0,sum);
        return sum-target;
       