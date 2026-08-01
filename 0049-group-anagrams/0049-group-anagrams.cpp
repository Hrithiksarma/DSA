class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>map;

        for(string c :strs){
            string key=c;
            sort(key.begin(),key.end());
            map[key].push_back(c);
        }

        vector<vector<string>>result;
        for(auto& pair:map){
            result.push_back(pair.second);
        }
        return result;
    }
};