#include <bits/stdc++.h>
using namespace std;

void generator(string &s,int i,int n){
if(i==n){
    cout<<s<<endl;
    return ;}

s.push_back('4');
generator(s,i+1,n);
s.pop_back();

s.push_back('7');
generator(s,i+1,n);
s.pop_back();


}



int main(){
    
    string s="";
    generator(s,0,5);
}