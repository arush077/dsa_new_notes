https://practice.geeksforgeeks.org/problems/friends-pairing-problem5425/1

//! N friends he and each friend can either go alone or go with another person as a pair , count the no of ways

//! Isme Take Not take wala nahi ho paega 
 //n=3
 // {1,2,3}

// lets say ki 1 goes alone
//or
// lets say ki 1 goes with 2 or 1 goes with 3

//now when u move to next index u dont know where one moved to 
//That is where it gets tricky what if you are on 2 but 1 had gone out with 2 so the two cases of going alone or in pair wont work for 2


//n=3 {1,2,3}

// so lets say we are solving for the last element ie 3
// so 3 goes alone 1 * f(n-1)
// so 3 goes out with someone : (n-1)C(1) se us someone ko chuse karo and neglect that someone and 3 so move 2 steps back so (n-1)c1 * f(n-2)

//recursive relation is f(n-1) + (n-1)c1 * f(n-2)
//! f(n-1) + (n-1)*f(n-2);

so yaha pe 2 bc daalo if(n==1) {return 1;}    if(n==2){return 2;}
