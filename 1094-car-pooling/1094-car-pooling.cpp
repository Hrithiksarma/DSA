class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int,int>event;
        for(auto&it:trips){
            int count=it[0];
            int start=it[1];
            int end=it[2];
            event[start]+=count;
            event[end]-=count;
        }
        int counter=0;

        for(auto&itr:event){
            counter+=itr.second;
            if (counter> capacity){
                return false;
            }
            else{
                continue;
            }

        }
        return true;
    }
};