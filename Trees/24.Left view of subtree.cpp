https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1




//!simple concept he ki har level pe jaake har level ko ek vector v me store karna and ans me bas v[0] hi lena he
          1            v:1         ans=1
      2      3         v:2,3       ans=1,2
 4      5   6   7      v:4,5,6,7   ans=1,2,4





vector<int> leftView(Node *root)
{
    
    vector<int> ans;
    queue<Node*> q;
    q.push(root);
    
    if(root==NULL){return ans;}
    if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data);
        return ans;}
    
    
    while(!q.empty()){
        int size=q.size();
        vector<int> v;
        while(size){
            Node*top=q.front();
            q.pop();
            v.push_back(top->data);

            if(top->left!=NULL){q.push(top->left);}
            if(top->right!=NULL){q.push(top->right);}
            
            size--;
        }
        ans.push_back(v[0]);
    }
    
    return ans;

}
