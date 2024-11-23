//! Permutations



void perms(int i,vector <int> &arr,int &count){          //! void hi he just like subset wale log ka code
    if(i==arr.size()-1){
        for(auto itr: arr){cout<<itr<<" ";}
        cout<<endl;}
    }
   
    for(int k=i;k<arr.size();k++){
        swap(arr[i],arr[k]);               //remember swap call swap
        perms(i+1,arr,count);          
        swap(arr[i],arr[k]);              //backtrack karna in for loop wala 
    }

}