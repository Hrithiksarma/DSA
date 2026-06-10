class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
       unordered_map<int,int>hash;
       vector<int>stack;
       for (int i =0;i< nums2.size();i++){
        while(!stack.empty() && nums2[i]>stack.back()){
            hash[stack.back()]=nums2[i];
            stack.pop_back();
           
        }
         stack.push_back(nums2[i]);

        
       }

        while(!stack.empty()){
            hash[stack.back()]=-1;
            stack.pop_back();
            }
      

       for(int num:nums1){
        ans.push_back(hash[num]);
         
        }
      return ans; 
    }

       

};