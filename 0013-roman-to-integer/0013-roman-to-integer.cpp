class Solution {
public:
    int romanToInt(string s) {
        
        int running_total=0;

        unordered_map<char,int>hash={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};


        for(int i =0;i<s.length();i++){
            if(i<s.length()-1 && hash[s[i]]<hash[s[i+1]]){
                running_total-=hash[s[i]];

            }
            else{
                running_total += hash[s[i]];
            }

        }
        return running_total ;



        
    }
};