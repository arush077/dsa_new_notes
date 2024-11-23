void generator(int i,vector<int> &temp,vector<int>arr){
    if(i==arr.size()){
        //
        return ; //!VIMP
    }


    temp.push_back(a);          //take
    generator(i+1,temp,arr);
    temp.pop_back();
    generator(i+1,temp,arr);    //nottake
}


--------------------------------------------------------------------------------------------------------


//! IMP : kabhi kabhi take me restriction dalni padti he to make a take_bit for simplicity
//jese ye wala qn https://leetcode.com/problems/the-number-of-beautiful-subsets/solutions/4516463/c-easy-backtracking-hashmap/
void generator(int i,vector<int> &temp,vector<int>arr){
    if(i==arr.size()){
        //
        return ; //!VIMP
    }

    -----------focus--------------------
    int take_bit=0;
    if(//koi condition hua to hi me take kar sakta)
    {
        take_bit++;
    }
    -------------------------------------

    if(take_bit){
        //take
        temp.push_back(a);
        generator(i+1,temp,arr);
        temp.pop_back();
    }

        //nottake
        generator(i+1,temp,arr);
}