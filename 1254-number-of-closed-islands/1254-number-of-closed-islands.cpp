class Solution {
public:

    bool isNotIland(int i,int j, vector<vector<bool>>&vis,vector<vector<int>>& grid){
        // base case
        if(i<0||i>=grid.size()||j<0||j>=grid[0].size()){
            return true;
        }
        if(vis[i][j]||grid[i][j]==1)return false;
        vis[i][j]=true;
        bool down= isNotIland(i+1,j,vis,grid);
        bool top=isNotIland(i-1,j,vis,grid);
        bool left=isNotIland(i,j-1,vis,grid);
        bool right=isNotIland(i,j+1,vis,grid);
        return top || down|| left || right;
    }

    int closedIsland(vector<vector<int>>& grid) {
        int count=0;
        vector<vector<bool>>vis(grid.size(),vector<bool>(grid[0].size(),false));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(!vis[i][j]&&grid[i][j]==0){
                if(!isNotIland(i,j,vis,grid)){
                    count++;
                }
                }
            }
        }
        return count;
    }
};

