 
 void gen(int i,vector<int> temp,vector<vector<int>>& ans,vector<int>& nums){       //dekho temp ko by ref nahi bheja he 
        if(i==nums.size()){
            //to dalo ans me bhi and set me bhi
            ans.push_back(temp);
            return;
        }


        //u are at i
        temp.push_back(nums[i]);      // is temp ko by reference nahi bheja he bro
        gen(i+1,temp,ans,nums,s);     //ek tarike ka take he ye

        temp.pop_back();
        gen(i+1,temp,ans,nums,s);    //ek tarike ka nottake he ye

    }
