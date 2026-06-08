class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans(nums.size());
        
        for(int i =0;i < nums.size();i++){
            int count  = 0;
            int j =i;
            while(j>=0){
                count+=nums[j];
                j--;
                
             }
             ans[i]=count;
        }
        return ans;
        
    }
};