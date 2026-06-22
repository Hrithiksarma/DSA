class Solution {
public:
    bool isAnagram(string s, string t) {
        int ans[26]={0};

        for(int i=0;i<s.length();i++){
            int letter=s[i]-'a';
            ans[letter]++;
        }

        for(int i=0;i<t.length();i++){
        int  letter=t[i]-'a';
            ans[letter]--;
        }

        for(int i =0;i <26;i++){
            if (ans[i]!=0){
                return false;
            }

        }
        return true;

    }       
    
};