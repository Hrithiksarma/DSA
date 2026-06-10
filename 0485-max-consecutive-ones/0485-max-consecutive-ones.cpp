class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currentSum =0;
        int maxSum =0;
        for(int i =0;i<nums.size();i++){
            if (nums[i]==1){
                currentSum+=nums[i];
                maxSum =  max(currentSum,maxSum);

            }

            else{
                currentSum=0;
            }
            
        }
        return maxSum;


        
    }
};