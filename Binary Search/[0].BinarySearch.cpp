//search space wale qns (min(max)) ya fir (max(min))
//when u gotta distribute n type of objects among m people...also each type of object can have many no of items of same type



//search space hamesha inke beech me hoga

0--------------max element------------sum of elements
    min(max)                 max(min)

//jab bhi ek given range me answer exist karra he to BS 100%



//min(max) 
//search space =[0,max element] 
// mid ayega to ab check karo ki if this is possible then isko min(max) matlab minimize karna he to left me jaao 0,mid-1



//max(min) 
//search space=[max element, sum of elements]
// mid ayega to ab check karo ki ye mid possible he kya if yes then move to max(min) tha to move to right side [mid+1,sum of elementss]


//mid = your answer so 
1.check if mid, if mid is possible answer yes then aur optimize karo 
2. no he to break it 