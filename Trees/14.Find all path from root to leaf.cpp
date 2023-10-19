Given a Binary Tree of size N, you need to find all the possible paths from root node to all the leaf node's of the binary tree.
https://practice.geeksforgeeks.org/problems/root-to-leaf-paths/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab


//! Again same concept as C13 jaha tumko bas inorder ke saath by refernce variables pass karne hote he and consioslly backtrack bhi


void inorder(Node* root, vector<int>& temp, vector<vector<int>>& ans) {
    if (root == nullptr) {                                                        //! Null he to return ;
        return;
    }

   

    if (root->left == nullptr && root->right == nullptr) {                        //! Leaf mila to pehle data push karo temp me 
        temp.push_back(root->data);                                               //! then temp ko push karo 2 vector ans me
        ans.push_back(temp);                                                      //! then temp ko bactrack ke lie pop_back karo
        temp.pop_back();          
        return ;                                                                  //! yaha se hi piche chale jaao no need to read niche ki backwas left and rightcall
    }

     temp.push_back(root->data);                                                  //! for non null and non leaf nodes pehle push

     inorder(root->left, temp, ans);                                               //! then calls
     inorder(root->right, temp, ans);

     // Pop the last element to backtrack
     temp.pop_back();                                                              //! then pop
}

 
 
 
 
 
vector<vector<int>> Paths(Node* root)
{
    vector <vector <int>> ans;
    vector <int> temp;
    inorder(root,temp,ans);
    return ans;
}