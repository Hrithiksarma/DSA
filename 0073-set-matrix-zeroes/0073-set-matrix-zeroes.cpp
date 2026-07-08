class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n = matrix[0].size();
        vector<bool>rowstozero(m,false);
        vector<bool>colstozero(n,false);

        for(int i=0;i<m;i++){
            for(int j =0;j<n;j++){
                if(matrix[i][j]==0){
                    rowstozero[i]=1;
                    colstozero[j]=1;
                }


            }
        }
        
        for(int i =0; i<m;i++){
            for(int j =0;j<n;j++){
                if(rowstozero[i]==1||colstozero[j]==1){
                    matrix[i][j]=0;
                }
            }
        }
    }
};