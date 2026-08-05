class Solution {
public:

    void backtrack(vector<int>&candidates,int startIndex,int target,vector<int>&combo,vector<vector<int>>&result){
        if(target==0){
            result.push_back(combo);

        }
        else if(target<0){
            return;
        }
        else{
            for(int j =startIndex;j<candidates.size();j++){
                combo.push_back(candidates[j]);
                backtrack(candidates,j,target-candidates[j],combo,result);
                combo.pop_back();
            }
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>combo;
        backtrack(candidates,0,target,combo,result);
        return result;


    }

};