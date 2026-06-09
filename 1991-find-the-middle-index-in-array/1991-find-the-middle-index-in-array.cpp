class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int left_sum=0;
        int total_sum=accumulate(nums.begin(),nums.end(),0);
        for(int i =0;i <nums.size();i++){
            if(left_sum==total_sum-nums[i]-left_sum){
                return i;
            }
            left_sum+=nums[i];
        }
        return -1;
        
    }
};