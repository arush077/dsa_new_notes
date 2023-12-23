https://leetcode.com/problems/binary-tree-level-order-traversal-ii/solutions/4434736/beat-100-easy-c-solution/

//!When u actually want the bfs levels but all levels into different vectors so essentially you want to return a 2d vector which had each vector for every separate level

//! bahar to while(!q.empty()) hi he but uske andar int size=q.size() for(i=0-->i<size)


     while(!q.empty()){
            int n=q.size();
            vector<int>v;

            for(int i=0;i<n;i++){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
                v.push_back(temp->val);
            }
            ans.push_back(v);
        }