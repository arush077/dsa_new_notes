//! IMP CONCEPT

distance between n1 and n2 ese hi nahi niklega bas ; u need to use lcs for this
lcs ek baar nikala to fir you will know ki yaa to both nodes are on same side of LCS ya to both nodes on diff sides of LCS




















class Solution{
    public:
    
    Node* LCS(Node* root,int a,int b){
        if(root==NULL){return NULL;}
        
        if(root->data==a || root->data==b){return root;}
        
        Node* lc=LCS(root->left,a,b);
        Node* rc=LCS(root->right,a,b);
        
        if(lc==NULL){return rc;}
        if(rc==NULL){return lc;}
        return root;
        
    }
    
    
    void disbw2pts(Node *root,int dest,int count,int &cneed){
        if(root==NULL){return ;}
        if(root->data==dest){cneed=count;}
        
        
        disbw2pts(root->left,dest,count+1,cneed);
        disbw2pts(root->right,dest,count+1,cneed);
    }
    

    int findDist(Node* root, int a, int b) {
        Node *L=LCS(root,a,b);
        // cout<<"LCS"<<" "<<L->data<<endl;
        int counter=0;
        if(L->data==a){disbw2pts(L,b,0,counter);return counter;}
        else if(L->data==b){disbw2pts(L,a,0,counter);return counter;}
        else{
            int counter1=0;
            int counter2=0;
            disbw2pts(L,a,0,counter1);
            disbw2pts(L,b,0,counter2);
            return counter1+counter2;
            
        }
    }