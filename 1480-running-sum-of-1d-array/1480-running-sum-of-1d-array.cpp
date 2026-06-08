class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans(nums.size());
        
       
        for(int i =1;i<nums.size();i++){
            nums[i]=nums[i-1]+nums[i];
        }
        return nums;

        
        
    }
};