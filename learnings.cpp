// freq he to map ayega hi 
// freq ke hissab se sort karna he to first use basic unordered map and then you can put this in a vector and sort it ya fir heap use karke top ke x elements ko nikal lena
// set me bhi 2 type hote he unordered and ordered




        // 3sum / 4sum me you have 3 options
        //1. brute force, just 3 / 4 for loops laga dena
        //2. ek for loop kam kar sakte ho by using a map[ but isme repeatitons ki issue ayegi so to avoid that you again have to use a set also (set bhi unordered set me vector allowed nahi hota so ordered wala use karna hoga) ] 
        //3. do for loop kam kar sakte ho as [ 2 sum can be solved by 2 pointer approach] //so 3sum(one for loop and for other 2 you have 2 pointer approach) //so 4sum(2 for loop and for other 2 you have 2 pointer approach)
        // but you will have to sort the entire array for the 3rd method and then loop lagana and uske andar 2 log nikalne ke lie 2 pointer approach




// 2 pointer approach and BS ka difference

// 2 pointer me s=s+1 ya e=e-1 hoga (jab sum diya hoga and 2 things adding upto that sum chahiye hoga in O(n))
// BS me s=mid+1, e=mid-1 hoga