https://leetcode.com/problems/binary-tree-level-order-traversal-ii/solutions/4434736/beat-100-easy-c-solution/
https://leetcode.com/problems/find-largest-value-in-each-tree-row/description/


//!When u actually want the bfs levels but all levels into different vectors so essentially you want to return a 2d vector which had each vector for every separate level

//! bahar to while(!q.empty()) hi he but uske andar int size=q.size() for(i=0-->i<size) and this for loop iterates for every level of the tree

//! also isme bfs ki tarah visited vector nahi rakna hota he wo to khaali bfs and dfs(graph wale qns me hota he) | tree wale qns me visited ki koi zarurat nahi he


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