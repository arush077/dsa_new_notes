https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/?envType=study-plan-v2&envId=top-interview-150

lets say an array is given and you are required to make a tree out of it 

//follow this standard template
//u need to maintain 2 pointers pointing to the start and end of array



int f(int s,int e,int arr){

    if(s>e){return NULL} //bc

    //now make the root node
    //lets say root node is mid node
    int mid = (s+e)/2
    Node* newnode = new Node(arr[mid])

    //connect newnode to left and right and then return the new node
    newnode->left  = f(s,mid-1)
    newnode->right = f(mid+1,e)

    return newnode;
}