//trick : 

//jab int overflow hora ho tab use array or string as they can hold upto infinite elements

// alternating chize jab hori hoti he 
// binary variable x that can be 0 or 1 and after every iteration do x = 1-x matlab alternate hoga 0 and 1 ke beech me 



//   x / y   if x chota he to ans = 0
//   x % y   if x chota he to ans = x
// so if x is a 2 digit number ye check karna he --->


// x --> (10,99) so x/100 == 0  as x is smaller than 100 so you can check like that 
// since 0 to 9 is not allowed so x/10!=0 matlab x is bigger than 10
// so x/100==0 && x/10!=0   matlab x is smaller than 100 but bigger than 10



//check power of 2
x & (x-1) == 0 then x is a power of 2------> 1,2,4,8,16,32,64 ...

x%2 ==0 then x is a multiple of 2 -----> 2,4,6,8,10,12,14 ...


// agar consecutive elements me comparisn karna ho in an array

i and i+1 me deklena so i+1<n so i<n-1

for(int i=0;i<n-1;i++){

    int sum = arr[i] + arr[i+1];

}



// set and vector

unordered_set <vector<int>> s  //does not work as u cant stoe a vector in unor set
set <vector<int>> s  //works as u cant stoe a vector in normal set



// arrays and consecutive eleemtns

//when u know consecutive elements lene he to i aur i+1 lena he to 
//go from 0 to n-1 and use i and i+1
for(int i=0;i<n-1;i++){
    int sum = arr[i] + arr[i+1];
}

//agar left aur right dono side ka dekna he to i-1 i i+1

