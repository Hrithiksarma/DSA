class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int currentSum = 0;
        int n = nums.size();
        for (int i=0;i<k;i++){
            currentSum+=nums[i];
        }
        int maxSum=currentSum;

        for ( int j=k;j<n;j++){
            currentSum=currentSum-nums[j-k]+nums[j];
            maxSum=max(currentSum,maxSum);
        }

        double average= (double)maxSum/k;
        return average;   
    }
};