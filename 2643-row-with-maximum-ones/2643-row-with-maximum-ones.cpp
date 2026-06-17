class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        
        int max_sum=0;
        int row_no=0;
        vector<int>ans;
        for (int i =0;i<mat.size();i++){
            int sum=0;
            for(int j =0;j<mat[i].size();j++){
                sum+=mat[i][j];

            }
            if(sum>max_sum){
                 row_no = i;
                max_sum=sum;
            }
            
        }
        ans.push_back(row_no);
        ans.push_back(max_sum);
        return ans;
        
    }
};