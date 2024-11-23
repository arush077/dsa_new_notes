https://practice.geeksforgeeks.org/problems/next-permutation5226/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab    
    
    vector<int> nextPermutation(int N, vector<int> arr){
        int temp=0;
        int temp2=0;
    int mini=1e9;
    for(int i=arr.size()-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            //i is the pivot point
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]>arr[i]){
                    if(mini>arr[j]-arr[i]){
                        mini=arr[j]-arr[i];
                        temp=j;
                    }
                }
            }
            
            temp2=i+1;
            swap(arr[i],arr[temp]);
            break;
            
        }
    }
    
    reverse(arr.begin()+temp2,arr.end());
    
        return arr;
        
    }