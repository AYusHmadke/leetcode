class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        int row=0,col=0;
        vis[0][0]=true;
        while(true){
            char d=grid[row][col];
            int nr=row,nc=col;

            if(d=='R')nc++;
            else if(d=='D')nr++;
            else if(d=='L')nc--;
            else if (d=='U')nr--;

            if(nr<0||nc<0||nr>=n||nc>=m)break;

            if(vis[nr][nc])break;

            row=nr;
            col=nc;
            vis[row][col]=true;
        }
        return {row,col};
    }
};