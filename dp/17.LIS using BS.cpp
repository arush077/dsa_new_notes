#include <bits/stdc++.h>


int ceil(vector<int> arr,int key){
int s=0;
int e=arr.size()-1;                                        //! ceil nikala he using BS Veasy
int result=0;
while(s<=e){
    int mid=s+(e-s)/2;
    if(arr[mid]==key){return mid;}
    else if (arr[mid]>key){result=mid; e=mid-1; }
    else {s=mid+1;}
}

return result;

}


int longestIncreasingSubsequence(int arr[], int n)
{
    
    vector <int> v;
    for(int i=0;i<n;i++){                              //! bas iterate maro arr ke through
        if(v.size()==0){
            v.push_back(arr[i]);
        }

        if(v[v.size()-1]<arr[i]){v.push_back(arr[i]);}        //!v ka last < arr[i] then simply push
        else if(v[v.size()-1]==arr[i]){continue;}             //!v ka last==arr[i] then u cant pushg arr[i] as u want striclty increasing
        else{
            int index=ceil(v,arr[i]);                         //!v ka last > arr[i] then simply use ceil
            v[index]=arr[i];
        }
    }


    return v.size();
}
