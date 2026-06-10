class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int freq[101]={0};
        int sum = 0;
        for(int num : nums){
            freq[num]++;

        }
        
        for(int j=0;j<101;j++){
            freq[j]=(freq[j])*(freq[j]-1)/2;

        }
        for(int h=0; h<101; h++){
            sum +=freq[h];
        }
        return sum;
    }
};