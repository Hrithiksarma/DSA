class Solution {

public:
    bool wordBreak(int idx, string &s , unordered_set<string>& wordSet, vector<int>&memo){
        int n = s.length();
        if(idx==n){
            return true;
        }
        if(memo[idx]!=-1){
            return memo[idx];
        }







        for(int l =1;l<=n-idx;l++){
            string temp=s.substr(idx,l);
            if(wordSet.find(temp)!=wordSet.end() && wordBreak(idx+l,s,wordSet,memo))
            {

                return memo[idx]=1;
            }
        }
        return memo[idx]=0;;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> wordSet(wordDict.begin(),wordDict.end());
        vector<int>memo(s.length(),-1);
        return wordBreak(0,s,wordSet,memo);
        
    }
};