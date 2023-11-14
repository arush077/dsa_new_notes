Find the largest BST in a binary tree

//!CRAZY QN (maintain a vector associated to each node and make the function ka return type as vector)
//!{count,min,max} ka vector maintain hoga
//!cases

//!null element => return an empty vector 

//!leaf node => itself is a BST of size 1 and min and max of such a bst is the node itself because ek hi node he {1,x,x}

//!left =null right=not null || left=not null right=null => then count +1 hoga if and only if wo wala node is lesser than right ka minimum ya wo wala node is bigger than left ka maximum 

//!left!=null and right!=null then so jitne left me he + jitne right me he +1 hoga naya count agar node lies in that range ki wo node esa ho ki left ke maximum vl[2] se bada ho and right ke minimum vr[1] se bada ho (critical case)

