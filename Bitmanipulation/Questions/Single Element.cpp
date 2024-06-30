https://leetcode.com/problems/single-number/description/?envType=study-plan-v2&envId=top-interview-150


--------------------------------------------
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4

-----------------------------------------------



    int singleNumber(vector<int>& nums) {
        int ans = 0;
        //samjho 2 same log exor hoke 0 denge
        //to sab 0 hojaenge except for that element who occurrs only once
        // (0..........0)^x = x 
        for(int i=0;i<nums.size();i++){
            ans = ans^nums[i];
        }

        return ans;
    }
};