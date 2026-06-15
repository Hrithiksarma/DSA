class Solution {
    public int diagonalSum(int[][] mat) {
        int  sum_primary=0;
        int sum_secondary=0;
        int n=mat.length;
        for(int i=0;i<n;i++){
            sum_primary += mat[i][i];
            sum_secondary+=mat[i][(n-1)-i];
            }

            

            if(n%2!=0){
                sum_secondary-=mat[n/2][n/2];

            }

    
    return sum_primary+sum_secondary;  

        
    }
}


        

            


        
        
        
        
 