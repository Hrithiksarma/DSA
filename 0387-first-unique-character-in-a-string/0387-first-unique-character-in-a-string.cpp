class Solution {
public:
    int firstUniqChar(string s) {
        int ans[26]={0};
     
        for(int i =0;i < s.length();i++){
            char letter= s[i];
            ans[letter-'a']++;
        }

        for( int i=0;i<s.length();i++){
            char letter= s[i];
            if(ans[letter-'a']==1)
            {
            return i;
            }
        }
        return -1;
    }
};