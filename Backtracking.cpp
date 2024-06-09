//!BACKTRACKING == hamesha void function

-------------------------------------------------------------------------------------------------------

//!take || nottake 
void f(int i){

//base case
if(i==n){...    return ;}

//take
if(condn){
    v.push_back();
    f(i+1,);
    v.pop_back();
}


//nottake
f(i+1,);


//end me kuch return take,nottake jesa bhi kuch nahi karna as void function he na

}

-------------------------------------------------------------------------------------------------------

//! generator wala

//generator wale me nottake ka matkarna sirf take wala hi part rakna

generate all 3digits nos where no== 1,9

void f(int i){

if(i==3){
    ...
    return ;
}



//take
for(int x=1;x<=9;x++){
    v.push_back();
    f(i+1,);
    v.pop_back();
}


//nottake wala part nahi ayega generator me okayyyy




}

-------------------------------------------------------------------------------------------------------



























when u pass shit by reference u need to make sure u clear that shit before returning back or before the end of the function

f(node,int &sum){
    if(!node){return ;}      //! DONOT FORGET TO RETURN INSIDE THE BASE CASE
    sum+=root->val;          //!
    f(node->left,sum);
    f(node->right,sum);
    sum-=root->val;          //!
}








