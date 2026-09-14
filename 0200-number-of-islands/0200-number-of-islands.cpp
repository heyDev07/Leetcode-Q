class Solution {
public:
    vector<int>rowarr={-1,0,1,0};
    vector<int>colarr={0,-1,0,1};
    void dfs(vector<vector<char>>&grid,vector<vector<int>>&visited,int i,int j,int row,int col){
        visited[i][j]=1;
        for(int k=0;k<4;k++){
            int r=i+rowarr[k];
            int c=j+colarr[k];
            if(r>=0 && c>=0 && r<row && c<col && grid[r][c]=='1' && visited[r][c]==0)
            {
                dfs(grid,visited,r,c,row,col);
            }
        }
        return;

    } 
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>visited(m,vector<int>(n,0));
        int output=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1' && visited[i][j]==0){
                    output++;
                    dfs(grid,visited,i,j,m,n);
                }
            }
        }
        return output;
    }
};