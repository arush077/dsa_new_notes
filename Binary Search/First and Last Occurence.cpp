https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/


//to find the first and the last occurence of an element in an array you can use binary search

// for first occurence you need to dig into left so even after you find the answer still dig into left 
// for last occurence you need to dig into right so even after you find the answer still dig into right 



    int first(vector<int>& nums, int target){
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int ans = -1;
        while(s<=e){
            int mid = (s+e)/2;

            if(nums[mid] == target){
                ans = mid;
                e = mid-1; //as you want the first index so dig deeper into left
            }
            else if( nums[mid] > target){
                
                e = mid - 1;
            }
            else{
                s = mid + 1; 
            }
        }

        return ans;
    }

    int last(vector<int>& nums, int target){
    int n = nums.size();
    int s = 0;
    int e = n-1;
    int ans = -1;
    while(s<=e){
        int mid = (s+e)/2;
           if(nums[mid] == target){
            ans = mid;
            s = mid+1; //as you want the last index so dig deeper into right
        }
           else if( nums[mid] > target){
             //you want mid to be bigger 
              e = mid - 1;
         }
         else{
              s = mid + 1; 
          }
      }
      return ans;
  }




