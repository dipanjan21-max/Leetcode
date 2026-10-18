class Solution {
public:
  
         bool abc(vector<vector<int>>& grid,int i,int j,int cnt){
        int n=grid.size();
        if(i<0 || j<0 || i>=n || j>=n) return false;
        if(grid[i][j]!=cnt) return false;
        if(cnt==n*n-1) return true;
        cnt++;
        return abc(grid,i-2,j-1,cnt) || abc(grid,i-2,j+1,cnt) || abc(grid,i+2,j-1,cnt) || abc(grid,i+2,j+1,cnt) || abc(grid,i-1,j-2,cnt) || abc(grid,i+1,j-2,cnt) || abc(grid,i-1,j+2,cnt) || abc(grid,i+1,j+2,cnt);
    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        return abc(grid,0,0,0);
        
        
    }
};