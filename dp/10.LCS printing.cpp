https://www.codingninjas.com/studio/problems/print-longest-common-subsequence_8416383?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

//!RECURSION
string printer(int i,int j,string s1,string s2){                                            //! AVOID Variable str="" passing and filling it along the way
	if(i<0 || j<0){return "";}                                                              //! usko fir memoize nahi kar paoge
	if(s1[i]==s2[j]){                                                                       //! Instead use string include =f(i-1,j-1)+s1[i] and not f(i-1,j-1,str+s1[i])
		return printer(i-1,j-1,s1,s2)+s1[i];      //!IMP TRICKY here dont make take variable and do take=f(i-1,j-1)+s[i]                                 
	}                                             //!because (if else) chalra he so (if) me bhi return karna hoga and (else) me bhi return karna hoga
	string ni1=printer(i-1,j,s1,s2);
	string ni2=printer(i,j-1,s1,s2);
	return (ni1.size()>ni2.size())?ni1:ni2;
}



string findLCS(int n, int m,string &s1, string &s2){
	return printer(n-1,m-1,s1,s2);
}



//! MEMOIZE
string printer(int i,int j,string s1,string s2,vector <vector<string>> &dp){                  //! since function is of string return type so string return hoga so dp ko bhi string datatype wala use karna hoga
	if(i<0 || j<0){return "";}

	if(dp[i][j]!=""){return dp[i][j];}

	if(s1[i]==s2[j]){
		return dp[i][j]=printer(i-1,j-1,s1,s2,dp)+s1[i];
	}
	string ni1=printer(i-1,j,s1,s2,dp);
	string ni2=printer(i,j-1,s1,s2,dp);
	return dp[i][j]=(ni1.size()>ni2.size())?ni1:ni2;
}



string findLCS(int n, int m,string &s1, string &s2){
	vector <vector<string>> dp(n,vector<string>(m,""));                                      //! 2D vector initialized with string
	return printer(n-1,m-1,s1,s2,dp);
}