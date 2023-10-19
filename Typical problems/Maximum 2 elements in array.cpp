//! One method ye he ki do baar for loop lagado
//! alternate efficient method he ki ek baar for loop lekin maxi1 and maxi2 maintain karna 

//! Lekin agar map wagera me 2nd largest freq puch leta he to obviously do baar loop chalake ans de dena








int main(){
    int arr[]={-1,3,6,0,-2};

    int maxi1=0;
    int maxi2=0;
    int pmaxi1=0;


    for(int i=0;i<5;i++){

        if(arr[i]>maxi1){maxi2=maxi1;maxi1=arr[i];}
        else if (arr[i]>maxi2){maxi2=arr[i];}
        // pmaxi1=maxi1;
    }

    cout<<maxi1<<maxi2;
}s