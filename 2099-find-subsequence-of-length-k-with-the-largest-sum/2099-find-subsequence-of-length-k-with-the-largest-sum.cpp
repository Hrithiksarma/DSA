class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        
        int n =nums.size();
        vector<vector<int>>pair(n,vector<int>(2));
        for(int i =0;i <n;i++){
            pair[i][0]=nums[i];
            pair[i][1]=i;
        }

        sort(pair.begin(),pair.end(),[](const vector<int>&a,const vector<int>&b){
            return a[0]>b[0];
        });

        pair.resize(k);

        sort(pair.begin(),pair.end(),[](const vector<int>&a,const vector<int>&b){
            return a[1] < b[1];
        });

        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(pair[i][0]);
        }

        return ans;
    }
};