  int snakesAndLadders(vector<vector<int>>& board) {
        //bfs se hi chalega see yt_mik_explains for reason because recursion me har possible path check hoga
        //but bfs me kindoff only shortest path ke through hi check hoga as visited array use karte he hum
       int n = board.size();
    int m = board[0].size();

    unordered_map<int, int> mp;
    int alt = 0;
    int notation = 1;

    for (int i = n - 1; i >= 0; i--) {
        if (alt == 0) {
            // no alternation
            for (int j = 0; j < m; j++) {
                alt = 1;
                mp[notation] = board[i][j];
                notation++;
            }
        } else {
            for (int j = m - 1; j >= 0; j--) {
                alt = 0;
                mp[notation] = board[i][j];
                notation++;
            }
        }
    }


          for(auto itr:mp){
            cout<<itr.first<<" "<<itr.second<<endl;
        }



    vector<int> visited(n * m + 1, 0);
    queue<pair<int, int>> q;
    q.push({1, 0});
    visited[1] = 1;
    int ans = -1;

    while (!q.empty()) {
        int node = q.front().first;
        int count = q.front().second;
        q.pop();

        // Check if you reached the destination
        if (node == n * m) {
            ans = count;
            break;
        }

        // Check for ladders or snakes
        if (mp[node] != -1) {
            q.push({mp[node], count});                          //agar ladder ya snake mila to fir count+1 nahi karna
        } else {
            // Dice throw
            for (int x = node + 1; x <= min(node + 6, n * m); x++) {
                if (!visited[x]) {
                    visited[x] = 1;
                    q.push({x, count + 1});                     //agar dice ke karan move kar rahe ho to +1 kardena
                }
            }
        }
    }

    return ans;


    }