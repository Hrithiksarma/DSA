class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>heap(stones.begin(),stones.end());

        while(heap.size()>1){
            int stones1=heap.top();
            heap.pop();
            int stones2=heap.top();
            heap.pop();


            if(stones1!=stones2){
                heap.push(stones1-stones2);
            }
        }
        if(heap.empty()){
            return 0;
        }
        else{
            return heap.top();
        }
    
    }


};