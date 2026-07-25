class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

        vector<int>result;
        for(int i =0;i<nums.size();i++){

            int left=0;
            int right =result.size();

            while(left<right){
                int mid=left+(right-left)/2;
                if(result[mid]<nums[i]){
                    left=mid+1;

                }
                else{
                    right=mid;
                }
            }

            if(left==result.size()){
                result.push_back(nums[i]);
            }
            else{
                result[left]=nums[i];
    
            }
        }

        return result.size();
    }
};