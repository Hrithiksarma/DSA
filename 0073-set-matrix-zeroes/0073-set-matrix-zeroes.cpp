class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>matrixcopy=matrix;
       int m = matrix.size();
    
        int n =matrix[0].size();

        for(int row=0;row<m;row++){
            for (int col=0;col<n;col++){
                if(matrixcopy[row][col]==0){
                    for(int j=0;j<n;j++){
                        matrix[row][j]=0;
                    }
                    for(int k=0;k<m;k++){
                        matrix[k][col]=0;
                    

                }
                }
            }
        }
    }
    

 
    
};