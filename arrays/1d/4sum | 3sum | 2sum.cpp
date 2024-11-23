class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
// 3sum / 4sum me you have 3 options
//1. brute force, just 3 / 4 for loops laga dena
//2. ek for loop kam kar sakte ho by using a map[ but isme repeatitons ki issue ayegi so to avoid that you again have to use a set also (set bhi unordered set me vector allowed nahi hota so ordered wala use karna hoga) ] 
//3. do for loop kam kar sakte ho as [ 2 sum can be solved by 2 pointer approach] //so 3sum(one for loop and for other 2 you have 2 pointer approach) //so 4sum(2 for loop and for other 2 you have 2 pointer approach)
// but you will have to sort the entire array for the 3rd method and then loop lagana and uske andar 2 log nikalne ke lie 2 pointer approach


// 2 pointer approach and BS ka difference

// 2 pointer me s=s+1 ya e=e-1 hoga (jab sum diya hoga and 2 things adding upto that sum chahiye hoga in O(n))
// BS me s=mid+1, e=mid-1 hoga
//! but just like BS this also has to be sorted


      int target = 0;
       set<vector<int>> se;
        // using the BS method
        // first sort the array
        int n = nums.size();
        sort(nums.begin(),nums.end());
         vector<vector<int>> ans;

        for(int i=0;i<n;i++){

                long target_new = long(target) - long(nums[i]); 
                // now you can use BS to find the other 2 guys and search them aage wale part me 
                int s = i+1;
                int e = n-1;

                while(s<e){
                    int sum = nums[s] + nums[e];                 //mid ke place pe do it for the sum
                    if(sum == target_new){
                        // i,j,s,e pe set he sab
                        vector<int> temp={nums[i],nums[s],nums[e]};       
                        se.insert(temp);
                        s++;
                        e--;
                    }

                    else if(sum<target_new){
                        //badhana padega sum ko 
                        s++;
                    }
                    else{
                        e--;
                    }


                }    
        }

                

        for(auto itr : se){
            ans.push_back(itr);
        }

        return ans;
    }
};