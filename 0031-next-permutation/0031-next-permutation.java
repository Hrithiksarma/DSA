class Solution {
    public void swapnums(int []nums,int x ,int y){
        int temp=nums[x];
        nums[x]=nums[y];
        nums[y]=temp;
    }
    public void reversenums(int []nums,int left, int right){
        while(left<right){
            swapnums(nums,left,right);
            left++;
            right--;
        }
    }
    public void nextPermutation(int[] nums) {
        int n=nums.length;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                int j =n-1;
                while(j>i){
                    if(nums[j]>nums[i]){
                        swapnums(nums,i,j);
                        break;
                        }
                        j--;
                   
                }
                 reversenums(nums,i+1 ,n-1);
                return;
                
            }
        }
        reversenums(nums,0,n-1);
    }
}