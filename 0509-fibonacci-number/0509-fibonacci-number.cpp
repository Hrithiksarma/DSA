class Solution {
public:
    int fib(int n) {
        vector<int>ans(n+1,-1);
       return  helper(n,ans);
    }
private:
      int helper(int n, vector<int>&ans){
    

        
        if (n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        if(ans[n]!=-1){
            return ans[n];
        }
        else{
        int sum =fib(n-1)+fib(n-2);
        ans[n]=sum;
        return sum;
        
  }
      }
      

};