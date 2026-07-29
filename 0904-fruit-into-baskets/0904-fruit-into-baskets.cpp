class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>hash;
        int max_fruits=0;
        int current=0;
        int left=0;

        for(int right =0;right<fruits.size();right++){
            hash[fruits[right]]++;

            while(hash.size()>2){

                hash[fruits[left]]--;
                if(hash[fruits[left]]==0){
                    hash.erase(fruits[left]);
                }
                left++;

            }
            max_fruits=max(max_fruits,(right-left+1));
        }

    return max_fruits;

        }
        

        
    };
