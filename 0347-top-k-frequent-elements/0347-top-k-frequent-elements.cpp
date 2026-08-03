class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>queue;
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for(auto& pair:mp){
            int no=pair.first;
            int freq=pair.second;
            if(queue.size()<k){
                queue.push({freq,no});

            
            }
            else{

                if(freq>queue.top().first){
                    queue.pop();
                    queue.push({freq,no});
                }
                else{
                    continue;
                }
            }
        }
                
                
            while(!queue.empty()){
                result.push_back(queue.top().second);
                queue.pop();
            }
    
            
     return result;   
    }


};