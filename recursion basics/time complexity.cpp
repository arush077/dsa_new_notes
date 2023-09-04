// ! TC:O(n) 
//!SC: auxillary stack space charge hota he for recursion solutions which is = depth of recursion tree O(n) 
f(i){
    f(i-1);                
}


//! TC:O(2^n)
//!SC: auxillary stack space charge hota he for recursion solutions which is = depth of recursion tree O(n) dekl lena tree banake kitna deep he simply
f(i){
    f(i-1)
    f(i-2)
}

//! Recursion --> worst time complexity
//! Bottom Up --> Reducing the time complexity but not solved the already solved subproblems thereby reducing the Time Complexity
//! Top Down --> Remove recursion as a whole would end up removing the auxillary stack space for recursion thereby reduces the Space Complexity

