https://leetcode.com/problems/maximum-profit-in-job-scheduling/

  int profitf(int i,int p,vector<int>& startTime, vector<int>& endTime, vector<int>& profit){
        if(i>=startTime.size()){return 0;}
        
        int take=-1e9;
        if( p==-1 || endTime[p]<=startTime[i]){
            take = profitf(i+1,i,startTime,endTime,profit) + profit[i];
        }

            int nottake = profitf(i+1,p,startTime,endTime,profit) + 0;

        return max(take,nottake);

    }


    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        map <int,int> m;
        int n=startTime.size();
        vector <pair <pair<int,int>,int>> temp ;
        for(int i=0;i<n;i++){
            // m[startTime[i]]=endTime[i]; 
            temp.push_back({{startTime[i],endTime[i]},profit[i]});
        }

        sort(temp.begin(),temp.end());

        for(int i=0;i<n;i++){
            auto itr =temp[i];
            
            // cout<<"itr"<<itr.first<<endl;
            startTime[i]= itr.first.first;
            endTime[i]=itr.first.second;
            profit[i]=itr.second;
        }


        // int i=0;
        // for(auto itr : m){
        //     startTime[i]= itr.first;
        //      endTime[i] = itr.second;
        //     i++;
        // }

        for(int i=0;i<n;i++){
            cout<<startTime[i]<<" "<<endTime[i]<<endl;
        }


       
        return profitf(0,-1,startTime,endTime,profit);
    }



    //! Memoize with coordinate shifting
      int profitf(int i,int p,vector<int>& startTime, vector<int>& endTime, vector<int>& profit,vector <vector <int>> &dp){
        if(i>=startTime.size()){return 0;}
        if(dp[i][p+1]!=-1){return dp[i][p+1];}
        int take=-1e9;
        if( p==-1 || endTime[p]<=startTime[i]){
            take = profitf(i+1,i,startTime,endTime,profit,dp) + profit[i];
        }

            int nottake = profitf(i+1,p,startTime,endTime,profit,dp) + 0;

        return dp[i][p+1]=max(take,nottake);

    }




    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        map <int,int> m;
        int n=startTime.size();
        vector <pair <pair<int,int>,int>> temp ;
        for(int i=0;i<n;i++){
            // m[startTime[i]]=endTime[i]; 
            temp.push_back({{startTime[i],endTime[i]},profit[i]});
        }

        sort(temp.begin(),temp.end());

        for(int i=0;i<n;i++){
            auto itr =temp[i];
            
            // cout<<"itr"<<itr.first<<endl;
            startTime[i]= itr.first.first;
            endTime[i]=itr.first.second;
            profit[i]=itr.second;
        }


        // int i=0;
        // for(auto itr : m){
        //     startTime[i]= itr.first;
        //      endTime[i] = itr.second;
        //     i++;
        // }

        for(int i=0;i<n;i++){
            cout<<startTime[i]<<" "<<endTime[i]<<endl;
        }


        vector <vector <int>> dp(n+1,vector <int>(n+1,-1));
        return profitf(0,-1,startTime,endTime,profit,dp);
    }