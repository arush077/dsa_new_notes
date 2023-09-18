//! COUNT INVERSIONS.
https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1

//! remember ki merge sort works on divide and merge and recursive call use hota he and merge sort is the sort operation which is called when you use sort STL
//! so essentialy you just keep diving the shit and then merge it back
//! U are not breaking any arrays here you are just using pointers to denote the arr start and array end which are a part of the og array
Input: N = 5, arr[] = {2, 4, 1, 3, 5}
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 
has three inversions (2, 1), (4, 1), (4, 3).

//! Brute force i and j do pointer lo and i ko fix karo and j ko iterate and see ki kitna baar arr[j]<arr[i] and ese cases me count++;so it will be O(n^2)



void mergesort(arr[],int s,int e){

    if(s>=e){return ;}

    int mid=(s+e)/2;

    mergesort(arr[],s,mid);
    mergesort(arr[],mid+1,e);
    merge(s,mid,e);

}


merge(arr[],s,mid,e){

    //! 2 sorted arrays ko merge karna he one is from s to mid and other is from mid+1 to e
    //! simply dono arrays pe ek ek pointer rakho and ek naya array of size n+m banakar usme pushback karte raho chote wale value ko
    int i=s;
    int e=mid+1;
    vector <int> temp;

    while(i<=mid && j<=e){
        if(arr[i]>arr[j]){temp.push_back(arr[j]);j++;}
        else{temp.push_back(arr[i]);i++;}

        //!bacha hua chiz
        while(i<=mid){
            temp.push_back(arr[i]);
            i++;
        }

        while(j<=e){
            temp.push_back(arr[j]);
            j++;
        }

    }

    //! arr[0] to arr[n] nahi fill karna tumne call hi kiya s se e ke lie to arr[s] se arr[e] tak hi bharo lekin temp me to 0 se n ka bhara he 
    //! so arr[s] me temp[0] dalna he arr[s+1] me temp[1]
    for (int i = s; i <= e; i++) {
        arr[i] = temp[i - s];
    }

}



