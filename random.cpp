#include <bits/stdc++.h>
using namespace std;
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
}