class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int row=grid.size();
        int col=grid[0].size();
        int freshCount=0;
        for(int i =0;i<row;i++){
            for(int j =0;j<col;j++){
                if(grid[i][j]==2){
                    q.push({i,j});

                }

                if(grid[i][j]==1){
                     freshCount++;
                }


            }
        }

        if(freshCount==0){
            return 0;
        }

        vector<pair<int,int>> dir={{-1,0},{1,0},{0,-1},{0,1}};
        int minutes=0;
        while(!q.empty()&& freshCount>0){
            int size=q.size();
            minutes++;

            for(int i =0;i<size;i++){
                auto[r,c]=q.front();
                q.pop();

                for(auto& dirs:dir){
                    int nr=r+dirs.first;
                    int nc=c+dirs.second;
                

                if(nr>=0 && nr<row && nc>=0 && nc<col&& grid[nr][nc]==1){
                    grid[nr][nc]=2;
                    freshCount--;
                    q.push({nr,nc});
                }

                }



            }
        }

        return freshCount==0? minutes     : -1;

        
    }

};