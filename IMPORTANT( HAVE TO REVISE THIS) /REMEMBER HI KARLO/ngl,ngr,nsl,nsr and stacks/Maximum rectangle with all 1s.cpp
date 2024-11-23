class Solution {
public:

//histogram ke area wala qn ko extend kiya he bas isme to 
//nsl aur nsr chahiye hota he histogram ka area nikalne ko
//simply drawio dekho
//har i pe vector uthakar uska min area histogram check karna he 












    
        int histogrammaxarea(vector<int>& heights) {
        //isme nsl and nsr next smaller on left and right taaki (nsl - nsr) * arr[i] karke ans nikale
        //both nsl and nsr is implemented using stacks 

        //nsl

      vector<int> nsl;
      vector<int> nslind;
      stack <pair<int,int>> st;

        for(int i=0;i<heights.size();i++){

            if(st.size()==0){nsl.push_back(-1);nslind.push_back(-1);}
            else if(st.size()>0 && st.top().first<heights[i]){nsl.push_back(st.top().first);nslind.push_back(st.top().second);}
            else if (!st.empty() && st.top().first>=heights[i] ){
                while(!st.empty() && st.top().first>=heights[i]){st.pop();}
                if(st.empty()){nsl.push_back(-1);nslind.push_back(-1);}
                else{
                    nslind.push_back(st.top().second);
                    nsl.push_back(st.top().first);
                }
            }

            
            st.push({heights[i],i});
        }

        // for(int i=0;i<heights.size();i++){
        //     cout<<nslind[i]<<" ";
        // }



    //nsr 
     vector<int> nsr;
     vector<int> nsrind;
      stack <pair<int,int>> st2;

        for(int i=heights.size()-1;i>=0;i--){

            if(st2.size()==0){nsr.push_back(-1);nsrind.push_back(-1);}
            else if(st2.size()>0 && st2.top().first<heights[i]){nsr.push_back(st2.top().first);nsrind.push_back(st2.top().second);}
            else if (!st2.empty() && st2.top().first>=heights[i] ){
                while(!st2.empty() && st2.top().first>=heights[i]){st2.pop();}
                if(st2.empty()){nsr.push_back(-1);nsrind.push_back(-1);}
                else{
                    nsr.push_back(st2.top().first);
                    nsrind.push_back(st2.top().second);
                }
            }

            st2.push({heights[i],i});
        }
        reverse(nsr.begin(),nsr.end());
        reverse(nsrind.begin(),nsrind.end());
        // cout<<endl;
        // for(int i=0;i<heights.size();i++){
        //     cout<<nsrind[i]<<" ";
        // }


        int maxi=0;
        int ans=0;
        for(int i=0;i<heights.size();i++){

            if(nsrind[i]==-1 && nslind[i]!=-1){
                ans= heights[i]*(heights.size() - nslind[i] -1);
            }
            else if(nsrind[i]!=-1 && nslind[i]==-1){
                ans= heights[i]*(nsrind[i]);
            }

            else if(nsrind[i]==-1 && nslind[i]==-1){
                ans= heights[i]*(heights.size());
            }

            else{ ans=(nsrind[i]-nslind[i]-1)*heights[i];}
           maxi=max(maxi,ans);
           ans=0;
            // cout<<i<<" "<<maxi<<endl;
        }

return maxi;
// return 0;

    }

    
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        int count=0;
        int maxi=0;
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> v(m,0);
        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='0'){v[j]=0;}
                else{
                v[j]=v[j]+(matrix[i][j]-'0');}
            }

            for(auto itr: v){cout<<itr;}
            cout<<endl;
            cout<<histogrammaxarea(v)<<endl;
            maxi=max(maxi,histogrammaxarea(v));
            // v.clear();
        }

        return maxi;
    }
};