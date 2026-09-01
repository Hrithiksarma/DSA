class Solution {
public:
    int t[60];
    int solve(int n  ){
        if(n==1){
            return 1;
        }

        if(t[n]!=-1){
            return t[n];
        }

        int result=INT_MIN;
        int prod=1;
        for(int i =1;i<=n-1;i++){
            prod=i*max(n-i,solve(n-i));
            result=max(result,prod);
            }
        return t[n]=result;
    }

    int integerBreak(int n) {
        memset(t,-1,sizeof(t));
        return solve(n);
        
    }
};