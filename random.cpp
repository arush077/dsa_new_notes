#include <bits/stdc++.h>
using namespace std;

int main(){

vector <int> arr={1,9,3,4,2,20};
    int count=1;
    int maxi=-1e9;
    for(int i=0;i<arr.size();i++){
    if(arr[i+1]==arr[i]+1){
        count++;
    }

    else{
        count=1;
    }
    maxi=max(maxi,count);
    }

    cout<<maxi;

    }

