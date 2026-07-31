class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int>hashset(nums.begin(),nums.end());
        int longest=0;
// {100,4,200}
        for(int num:hashset){
            if(hashset.find(num-1)==hashset.end()){
                int currentnum=num;
                int length=1;
                while(hashset.find(currentnum+1)!=hashset.end()){
                    currentnum++;
                    length++;
                }

                longest=max(longest,length);
            }
        }
        
        return longest;

 }
};