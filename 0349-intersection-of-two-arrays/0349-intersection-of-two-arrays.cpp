class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_set<int>hash(nums1.begin(),nums1.end());

        for(int i =0;i <nums2.size();i++){
            if(hash.count(nums2[i])==1){
                ans.push_back(nums2[i]);
                hash.erase(nums2[i]);
            }

        }

        return ans;


        
    }
};