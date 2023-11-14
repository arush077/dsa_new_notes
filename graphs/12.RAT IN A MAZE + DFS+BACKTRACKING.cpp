   public:
void dfs(int i, int j, vector<vector<int>> &visited, vector<vector<int>> &m, string &path, vector<string> &result) {
    // If we've reached the destination, add the path to the result.
    if (i == m.size() - 1 && j == m[0].size() - 1) {
        result.push_back(path);
        return;
    }
    
    
    
    

    int di[] = {0, 1, 0, -1};
    int dj[] = {1, 0, -1, 0};
    char direction[] = {'R', 'D', 'L', 'U'};

    for (int x = 0; x < 4; x++) {
        int ni = i + di[x];
        int nj = j + dj[x];

        if (ni >= 0 && ni < m.size() && nj >= 0 && nj < m[0].size() && !visited[ni][nj] && m[ni][nj] == 1) {
            visited[ni][nj] = 1;
            path += direction[x];
            dfs(ni, nj, visited, m, path, result);
            // Backtrack
            path.pop_back();
            visited[ni][nj] = 0;
        }
    }
}

vector<string> findPath(vector<vector<int>> &m, int n) {
    string path = "";
    vector<vector<int>> visited(n, vector<int>(m[0].size(), 0));
    vector<string> result;
    visited[0][0] = 1;
  
    
    // int n=m.size()-1;
    int mi=m[0].size();
    if(m[n-1][mi-1]==0 || m[0][0]==0){return result;}
      dfs(0, 0, visited, m, path, result);
    
    return result;
}