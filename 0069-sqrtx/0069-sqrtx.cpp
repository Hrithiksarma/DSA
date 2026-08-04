class Solution {
public:
    int mySqrt(int x) {
        long long answer=0;
        if(x==0){
            return 0;
        }
        int left=1;
        int right =x;
        
        while(left<=right){
            long long mid=left+(right-left)/2;
            if(mid*mid==x){
                return mid;

            }
            else if(mid*mid<x){
                answer =mid;
                left=mid+1;

            }
            else{
                
                right=mid-1;
            
            }
            
            }
        return answer;
    }
};