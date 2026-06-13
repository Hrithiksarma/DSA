class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n =nums.size();
        int current_sum = nums[0];
        int global_sum = nums[0];

        for(int i =1;i<n;i++){
            current_sum=max(current_sum+nums[i],nums[i]);
            global_sum=max(global_sum,current_sum);

        }

        return global_sum;
    }
};