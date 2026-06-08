class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count =0;
        for(int i =0;i <n ; i ++){  // 0,1,2,3,4   nums [0]= 12  n 12/10 ot 0/10

            int noOfDigits=0;  /// 6554 /10 
            while(nums[i]!=0){
                
                nums[i]=nums[i]/10;
                noOfDigits++;       
            }
            if (noOfDigits%2==0){
                count=count+1;
            }


        }
        return count;
        
    }
};


