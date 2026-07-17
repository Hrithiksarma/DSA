class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        int island=0;
        vector<pair<int,int>>directions={{-1,0},{1,0},{0,-1},{0,1}};

        for(int i =0;i<rows;i++){
            for(int j =0;j<cols;j++){
                if( grid[i][j]=='1'){
                    grid[i][j]='0';
                    island++;
                    queue<pair<int,int>>q;
                 
                    q.push({i,j});
                

                while(!q.empty()){
                    auto[r,c]=q.front();
                    q.pop();

                    for(auto& dir: directions){
                        int nr=r+dir.first;
                        int nc=c+dir.second;
                        if(nr>=0 && nr <rows && nc>=0 && nc<cols && grid[nr][nc]=='1'){
                            q.push({nr,nc});
                            grid[nr][nc]='0';
                        }
                    }

                    }


                }
            }
        }
    return island;    
    }

};