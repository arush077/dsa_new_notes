https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/submissions/?envType=study-plan-v2&envId=top-interview-150

//! isme dekho simple concept yahi he ki unsorted me BS lagana ho
//! to us array ka ek rough sketch banao and dekho mid kaha kaha aa sakta
//! and then uske hisaab se conditions likho bs ke andar




 // O(logn) dekte hi BS dimaag me aaya

        // a[0] sabse chota hoga initially

        //nums = [0,1,2,4,5,6,7]
        //4 times


        //1st time : 7 0 1 2 4 5 6
        //2nd time : 6 7 0 1 2 4 5 
        //3rd time : 5 6 7 0 1 2 4 
        //4th time : 4 5 6 7 0 1 2


        //kindoff 


        //1.AGAR ROTATE KIYA THEN SOMETHING OF THIS SORT BANEGA
        // ARR[0] > ARR[N-1] IF ITS ROTATED
        //    /|
        //   / |
        //  /  |
        //     |  
        //     |   /
        //     |  /
        //     | /
        //     MIN

        //ab bs me esa koi tarika to nahi to find the max or the min element
        //also bs sirf aur sirf sorted par lagta he to yaha kese lagaoge 
        //yaha bhi laga sakte but sirf with change in conditions


               2
        //    /|
        // 1 / |
        //  /  |
        // s   |    e
        //     |   /
        //     |  /4
        //     | /
        //     MIN
               3

        //mid could be at either of 1 2 3 4
        //let say
        //mid is at 1 ie mid<mid+1 and mid>s then s=mid+1;
        //mid is at 2 ie mid>mid+1 then return mid+1 as answer
        //mid is at 3 ie mid-1 > mid < mid+1 so return mid as ans
        //mid is at 4 ie mid<mid+1 and mid<e then e=mid-1

        //just explore all posibilities of mid thats it lol





        //2. ELSE ARR[0] < ARR[N-1] THEN NOT ROTATED SO ARR[0] IS THE LARGEST

        int n = nums.size();
        if(nums[0]<nums[n-1]){
            //sorted he bhai
            return nums[0];
        }

        int s=0;
        int e=n-1;
        while(s<=e){
            int m =(s+e)/2;

            if(nums[s]==nums[e]){return nums[e];}

            if(m-1>=0 && m+1<n && nums[m-1]>nums[m] && nums[m]<nums[m+1]){return nums[m];}

            if(nums[m]>nums[m+1]){return nums[m+1];}

            else if(nums[m]<nums[m+1]){

                if(nums[s]<nums[m]){s=m+1;}
                else if (nums[e]>nums[m]){e=m-1;}

            }


        }

        return -1;