class Solution {
public:
    int m,n;
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        m = grid.size();
        n = grid[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==0)
                    q.push({i,j});
            }
        }
        while(!q.empty()){
            auto [i,j] = q.front();
            q.pop();
            if(i+1 < m && grid[i+1][j] == 2147483647){
                grid[i+1][j] = grid[i][j] + 1;
                q.push({i+1,j});
            }
            if(j+1 < n && grid[i][j+1] == 2147483647){
                grid[i][j+1] = grid[i][j] + 1;
                q.push({i,j+1});
            }
            if(i-1 >= 0 && grid[i-1][j] == 2147483647){
                grid[i-1][j] = grid[i][j] + 1;
                q.push({i-1,j});
            }
            if(j-1 >= 0 && grid[i][j-1] == 2147483647){
                grid[i][j-1] = grid[i][j] + 1;
                q.push({i,j-1});
            }
        }
    }
};
