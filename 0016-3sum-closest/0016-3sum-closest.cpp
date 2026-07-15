class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n =nums.size();

        int closest_sum=nums[0]+nums[1]+nums[2];

        for(int i =0;i<n;i++){
            int left=i+1;
            int right =n-1;
            while(left<right){
            int sum = nums[i]+nums[left]+nums[right];
            if(sum==target){
                return sum;
            }
            else{
                    if(abs(target-sum)<abs(target-closest_sum)){
                        closest_sum=sum;
                    }
                if ( sum >target){
                    right--;
                }
                else{
                    left++;
                }
            }
        }
        
         
    }
     return closest_sum;  
}
};