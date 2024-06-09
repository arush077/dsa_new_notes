kth smallest = ulta = max heap
kth larget = ulta = min heap

popping right/ upar se hi hogi bro


heap == binary tree == do bacche

O(nlogk) is the Time complexity of finding Kth largest or Kth smallest

O(nlogn) is heapsort ki TC
O(1) is heapsort ki SC

minh.push
minh.pop
minh.top   (ht == heap me top use hoga)







--------------------------------------------------------------------------------------------------

[5 3 2 1 4]

2nd largest = minheap use karunga = minheap choto ko upar/right me rakhega 

[5]  size=1 
[5 3]  size=2
[5 3 2]  size>2 ===> size 2 kro = right se hi pop = [5 3]
[5 3 1]  size>2 ===> size 2 kro = right se hi pop = [5 3]
[5 3 4]  size>2 ===> size 2 kro = right se hi pop = [5 3] == 3 is the answer ie the 2nd largest element


priority_queue<int,vector<int>,greater<int>> minh;
for(int i=0;i<arr.size();i++){
min.push(arr[i]);
if(minh.size()>k){
    while(minh.size()>k){minh.pop();}
}
}
return minh.top();



--------------------------------------------------------------------------------------------------


[5 3 2 1 4]

2nd smallest = maxheap use karunga = maxheap bado ko upar/right me rakhega 

[5]  size=1 
[3 5]  size=2
[2 3 5]  size>2 ===> size 2 kro = right se hi pop = [2 3]
[1 2 3]  size>2 ===> size 2 kro = right se hi pop = [1 2]
[1 2 4]  size>2 ===> size 2 kro = right se hi pop = [1 2] == 2 is the answer ie the 2nd smallest element


priority_queue<int> maxh;
for(int i=0;i<arr.size();i++){
maxh.push(arr[i]);
if(maxh.size()>k){
    while(maxh.size()>k){maxh.pop();}
}
}
return maxh.top();




------------------------------------------------------------------------------------------------------


