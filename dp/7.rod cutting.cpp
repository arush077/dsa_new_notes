https://www.codingninjas.com/studio/problems/rod-cutting-problem_800284?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

//! samjho unbounded knapsack ka he so iska base case me 
//! jab ek element bachra ho to dekho ki us ek element ko bohot baar leke kuch kar sakte ho kya 
//!(N%i==0) matlab bohot baar le sakte ho and N/i baar le sakte ho

//! IMP CONCEPT YE HE KI UNBOUNDED KE 

//!TAKE ME I HI HOTA HE LEKIN
//!NOT TAKE ME I+1 HOGA

//! DONT GET CONFUSED YAHA 1 BASED INDEXING KE PERSPECTIVE SE KIYA HE 

int rodder(int i,int N,vector<int> &price){

if(i==0){return 0;}

if(i==1){
	if(N==1){return price[i-1];}
	else if (N>i){                                       //!i==1 matlab last wala ek element as 1 based indexing kare he
		if(N%i==0){return price[i-1]*(N/i); }            //! N%i hora he to matlab i length se N size bana sakte ho
	}
	else if (N<i){return 0;}
}

int take=-1e9;                                            //!take wale case me hamesha esa negative chiz likho
if(N>=i){
take=price[i-1]+rodder(i,N-i,price);}

int nottake= 0 + rodder(i-1,N,price);

return max(take,nottake);                                 //! simply profit maximize karna he


}




int cutRod(vector<int> &price, int n)
{
	return rodder(n,n,price);




}
