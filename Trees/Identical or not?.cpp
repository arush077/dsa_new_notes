https://leetcode.com/problems/same-tree/


    bool cmp(TreeNode* p, TreeNode* q){
        if(p==NULL && q==NULL){return true;}
        else if((p==NULL && q!=NULL) || (p!=NULL && q==NULL) ){return false;}

        //you are at that node
        if(p->val == q->val){
            //then you think of moving left or right
            bool left = cmp(p->left,q->left);
            bool right = cmp(p->right,q->right);

            if(left && right){
                return true;
            }
            else{
                //left ya right me se koi ek false he tab
                return false;
            }
        }


        else{
            return false;
        }


    }