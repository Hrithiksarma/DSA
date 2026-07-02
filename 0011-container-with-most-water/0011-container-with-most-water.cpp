class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;
        int n=height.size();
        int left=0;
        int right =n-1;

        while(left<right){
            int area=min(height[left],height[right])*(right-left);
            if(area>maxArea){
                maxArea=area;
            }
            if(height[left]>=height[right]){
                right--;
            }
            else{
                left++;
            }
        }

        return maxArea;

        
    }
};