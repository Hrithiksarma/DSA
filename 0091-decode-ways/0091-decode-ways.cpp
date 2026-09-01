class Solution {
    int t[101];

    int solve(string &s,int i,int &n ){
        
        if(t[i]!=-1){
            return t[i];
        }
        if(i==n){
            return t[i]=1;
        }
        if(s[i]=='0'){
            return t[i]=0;
        }
        int result=solve(s,i+1,n);
        if(i+1<n){
            if(s[i]=='1'||s[i]=='2' && s[i+1]<='6'){
                result+=solve(s,i+2,n);
            }
        }
        return t[i]=result;

    }
   
    public:
     int numDecodings(string s) {
        memset(t,-1,sizeof(t));

        int n =s.length();
        return solve(s,0,n);
        
    }
};


