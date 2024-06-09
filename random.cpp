#include <bits/stdc++.h>
using namespace std;

int main(){
  int arr[]={3,2,1,4};
  int min1=arr[0];
  int min2=arr[0];
  for(int i=0;i<4;i++){

    if(min1>arr[i]){
      min2=min1;
      min1=arr[i];
    }
  }   

  cout<<min1<<min2;
    
}