https://leetcode.com/problems/wiggle-sort-ii/description/


//concept: pehle to sort kardo sabko
[1,5,1,1,6,4] => [1,1,1,4,5,6]

//then rightmost me se chize uthakar left me daalte jao


[1,1,1,4,5,6]
           |
    6 ko uthake left me feko 1 aur 1 ke bich me

[1,6,1,1,4,5]
           |
    5 ko uthake feko




wese hi no of times u throw right elements to the left vary karega depending on n or no of elements















class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> ans(n,-1);

        if(n%2==0){
            int odd=1;
            for(int i=n-1;i>=n/2;i--){
                ans[odd]=nums[i];
                odd=odd+2;
            }

            int j=n/2-1;
            for(int i=0;i<n;i++){
                //agar ye space khaali he to
                if(ans[i]==-1){
                    ans[i]=nums[j];
                    j--;
                }
                
            }
        }

        else{
            int odd=1;
            for(int i=n-1;i>=(n/2) + 1;i--){
                ans[odd]=nums[i];
                odd=odd+2;
            }

            int j=n/2;
            for(int i=0;i<n;i++){
                //agar ye space khaali he to
                if(ans[i]==-1){
                    ans[i]=nums[j];
                    j--;
                }
                
            }

        }


        nums=ans;

    }
};