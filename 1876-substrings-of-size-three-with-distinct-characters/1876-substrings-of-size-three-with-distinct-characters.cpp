class Solution {
public:
    int countGoodSubstrings(string s) {
        int count=0;
        int len = s.length();
        if(len==0 || len==1||len==2){
            return 0;
        }
        for(int i =0;i<=s.length()-3;i++){
            int j = i+1;
            int k =i+2;
            if (s[i]!=s[j] && s[j]!=s[k] && s[k]!=s[i]){
                count+=1;            
        }
    
    }
       return count;
    }

};