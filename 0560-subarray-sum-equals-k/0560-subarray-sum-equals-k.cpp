class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>hash;
        hash[0]=1;
        int count=0;
        int curr_sum=0;

        for(int num :nums){
            curr_sum +=num;
            if(hash.find(curr_sum-k)!=hash.end()){
                count+=hash[curr_sum-k];
            }
        

        hash[curr_sum]++;
        }
        return count;
    }
        };


        

        
    
