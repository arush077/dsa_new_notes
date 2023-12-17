
//! nsl he to move from left to right and st.top() ko less karo
//! nsr he to move from right to left and st.top() ko less karo and isme reverse bhi karna hoga ansvect

//! ngl he to move from left to right and st.top() ko bada karo
//! ngr he to move from right to left and st.top() ko bada karo and isme reverse bhi karna hoga ansvect
 




#include <bits/stdc++.h>
//nsl
      vector<int> nsl;
      stack <pair<int,int>> st;

        for(int i=0;i<heights.size();i++){

            if(st.size()==0){nsl.push_back(-1);}
            else if(st.size()>0 && st.top().first<heights[i]){nsl.push_back(st.top().first);}
            else if (!st.empty() && st.top().first>=heights[i] ){
                while(!st.empty() && st.top().first>=heights[i]){st.pop();}
                if(st.empty()){nsl.push_back(-1);}
                else{
                    nsl.push_back(st.top().first);
                }
            }

            // wo tin conditions ke baad stack par dhyaan do ab and isko bahar likna because ye to saare case me use horaha
            st.push({heights[i],i});
        }

        for(int i=0;i<heights.size();i++){
            cout<<nsl[i]<<" ";
        }



//nsr
 vector<int> nsr;
      stack <pair<int,int>> st2;

        for(int i=heights.size()-1;i>=0;i--){

            if(st2.size()==0){nsr.push_back(-1);}
            else if(st2.size()>0 && st2.top().first<heights[i]){nsr.push_back(st2.top().first);}
            else if (!st2.empty() && st2.top().first>=heights[i] ){
                while(!st2.empty() && st2.top().first>=heights[i]){st2.pop();}
                if(st2.empty()){nsr.push_back(-1);}
                else{
                    nsr.push_back(st2.top().first);
                }
            }

            st2.push({heights[i],i});
        }
        reverse(nsr.begin(),nsr.end());
        cout<<endl;
        for(int i=0;i<heights.size();i++){
            cout<<nsr[i]<<" ";
        }
