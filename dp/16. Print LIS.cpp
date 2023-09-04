//! PRINT LIS

//! Recursion
vector <int> f(int i,int pichla,vector<int> arr){
if(i<0){
	vector <int> v;                         //! return empty vectors
	return v;
}
vector <int> take;                           //! Take ko initially empty rakho
if(pichla==-1 || arr[pichla]>arr[i]){        //! agar conditions satisfy then only fill take
	vector <int> call=f(i-1,i,arr);
    call.push_back(arr[i]);
	take=call;

}
vector <int> nottake=f(i-1,pichla,arr);      //! nottake


return (take.size()>nottake.size())?take:nottake;   //! jiska bhi size bada ho use wapas karo
}

//! DRIVER
vector<int> printingLongestIncreasingSubsequence(vector<int> arr, int n) {
	return f(arr.size()-1,-1,arr);

}



//! 2.MEMOIZATION


vector <int> f(int i,int pichla,vector<int> arr,vector <vector<vector <int>>> &dp){
if(i<0){
	vector <int> v;
	return v;
}

if(dp[i][pichla+1].size()!=0){return dp[i][pichla+1];}                                             //! pichla+1 ka logic LIS me dekhlo

vector <int> take;

if(pichla==-1 || arr[pichla]>arr[i]){
	vector <int> call=f(i-1,i,arr,dp);
    call.push_back(arr[i]);
	take=call;
// take=call.push_back(arr[i]);

}
vector <int> nottake=f(i-1,pichla,arr,dp);

return dp[i][pichla+1]=((take.size()>nottake.size())?take:nottake);
}




vector<int> printingLongestIncreasingSubsequence(vector<int> arr, int n) {
	vector <int> empty;
	vector <vector<vector <int>>> dp(arr.size(),vector <vector<int>>(arr.size()+1,empty));             //! n*(n+1) ka matrix banega jaake LIS padlo
	return f(arr.size()-1,-1,arr,dp);



}
