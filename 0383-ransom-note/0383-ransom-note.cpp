class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26]={0};

    for(int i =0;i<magazine.length();i++){
        freq[magazine[i]-'a']++;

    }

    for(int j =0;j<ransomNote.length();j++){
        if (freq[ransomNote[j]-'a']==0){
            return false;
        }
        else{
            freq[ransomNote[j]-'a']--;
        }
    }
    return true;
    }
};