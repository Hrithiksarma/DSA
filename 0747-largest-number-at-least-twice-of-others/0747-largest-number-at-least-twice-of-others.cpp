class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxElement=-1;
        int secondMax=-1;
        int index;

        for (int i =0;i<nums.size();i++){
            if (nums[i]>maxElement){
                secondMax=maxElement;
                maxElement=nums[i];
                index=i;

            }

            else if(nums[i]>secondMax){
                    secondMax=nums[i];
                }
            
            
        
    }
    if ( maxElement >= 2*secondMax){
        return index;
    }
    else{
        return -1;
    }
    }
};