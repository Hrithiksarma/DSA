class Solution {
public:
    bool check(vector<int>& nums) {
        int count_drops=0;
        int n =nums.size();

        for (int i =0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]){
                count_drops++;

            }

        }

        return count_drops <=1;
        
    }
};