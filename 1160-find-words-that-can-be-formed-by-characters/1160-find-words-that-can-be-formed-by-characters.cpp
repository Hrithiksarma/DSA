class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
   int chars_count[26]={0};
   for(char c : chars){
    chars_count[c-'a']++;
   }
   int total_length=0;
   for(const string&word:words){
    int word_count[26]={0};
    bool is_valid=true;
    for(char  c: word){
        int index=c-'a';
        word_count[index]++;

        if(word_count[index]>chars_count[index]){
            is_valid=false;
            break;
        }
    }
   if(is_valid){
    total_length+=word.length();

   }

    
   }
   return total_length;
    }
    
};