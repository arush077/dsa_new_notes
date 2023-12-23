1.stock buy sell ka max diff when (sell ka index > buy ka index) 

//dmm(difference le,maximum of diff kar,minimize buy) //and buy ko start me index 0 pe set karna


2. reverse a no : ans=ans*10 + rem


3.generating all possibilites
_ _ _ in tin spaces me every space can have ( or ) so give all possible combinations remember pcp follow hoga isme ie //!push call pop

void generator(int i,string &s){
    if(i==n){
        //yaha mil jaega string
    }

    s=s + '(';
    generator(i+1,s);
    s.pop_back();

    s=s+')'
    generator(i+1,s);
    s.pop_back;

}




4. Perm

abc ke saare perms: abc,bca,bac etc...

void perms(int i,vector <int> &arr,int &count){
    if(i==arr.size()-1){
        for(auto itr: arr){cout<<itr<<" ";}
        cout<<endl;}
    }
   
   
    for(int k=i;k<arr.size();k++){
        swap(arr[i],arr[k]);               //remember swap call swap
        perms(i+1,arr,count);          
        swap(arr[i],arr[k]);              //backtrack karna in for loop wala 
    }





    5.no from start 
    [1,2,3] == 123
    //array se number me laana ho to use same concept of reversing the no 
    for(int i=0;i<n;i++){
        sum=sum*10 + arr[i]  {{remember this ki sum = sum*10 + rem }}
    }

    and then stoi(s) and to_string(x)



    6.sorting me bas merge sort hi nlogn me kaaam karta he and also ll ke sorting me merge sort help karti he
    void ms(int s,int e,int arr){
        if(s>e){return ;}
        int mid=
        ms(s,mid)
        ms(mid+1,e)
        merge2sortedarrays(s,mid,e)    //one array is from s to mid and other is from mid+1 to the end
    }
    
//! jabtak ek ek tukde me tutega nahi tabtak merge nahi karna 