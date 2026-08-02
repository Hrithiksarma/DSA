class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=findindex(nums,target,true);
        int right=findindex(nums,target,false);
           return {left,right};
    }


        int findindex(vector<int>&nums,int target, bool dir){
            int left=0;
            int right=nums.size()-1;
            int result=-1;
            while(left<=right){
                int mid=left+(right-left)/2;
                if(nums[mid]==target){
                    result=mid;
                    if(dir){
                        right=mid-1;
                    }
                    else{
                        left=mid+1;
                    }
                }
                else if(nums[mid]<target){
                    left=mid+1;
                }
                else{
                    right=mid-1;
                }
                }
                return result;
            }
        };
        
    