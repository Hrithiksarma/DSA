class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>hash;
        int sum=0;

        for(int num:nums){
            hash[num]++;
        }

        for(auto&pair : hash){
            if(pair.second==1){
                sum+=pair.first;
            }
        }
        return sum;
    }
};