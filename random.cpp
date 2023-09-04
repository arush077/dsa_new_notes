#include <bits/stdc++.h>
using namespace std;

int main(){
vector <vector <int>> arr(8,vector <int>(8,0));
vector <vector <int>> visited(8,vector <int>(8,0));

queue <pair<pair<int,int>,int>> q;
q.push({{0,0},0});
visited[0][0]=1;

int mini=1e9;
while(!q.empty()){
auto temp=q.front();
q.pop();
int i=temp.first.first;
int j=temp.first.second;
int jumps=temp.second;


vector <int> di={-1,-2,-2,-1,+1,+2,+2,+1};
vector <int> dj={+2,+1,-1,-2,-2,-1,+1,+2};
for(int x=0;x<8;x++){
int ni=i+di[x];
int nj=j+dj[x];
if(ni >=0 && ni<8 && nj>=0 && nj<8 && !visited[ni][nj]){
q.push({{ni,nj},jumps+1});
visited[ni][nj]=1;
if(ni==7 && nj==7){mini=min(mini,jumps+1);}

}    
}




}
cout<<mini;




    
}