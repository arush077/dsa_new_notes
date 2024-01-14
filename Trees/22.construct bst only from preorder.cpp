//!Concept: BST only and only pre ya post se pura ka pura ban sakta he taking into account our known fact ki left me chote and right me bade he

Tree* maker(int s,int e,vector<int> arr){
if(s>e){return NULL;}
if(s==e){
    Tree* node= new Tree(arr[s]);
}

int mid=0;
for(int i=s;i<=e;i++){
if(arr[i]>arr[s]){mid=i;}
break;
}


//node mila ab iska left aur right decide karke isko lauta do

//ek corner case ye ho sakta he ki mid=0 hi reh jaae matlab koi bhi arr[i] bada naa ho
//matlab right he hi nahi
//so just call for left and rigth par null kardena
if(mid==0){
    node->left=maker(s+1,m-1,arr);
    node->right=NULL;

}






Tree* node= new Tree(arr[s]);   

node->left=maker(s+1,m-1,arr);
node->right=maker(m,e,arr);

return node;

}