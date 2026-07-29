class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n =temperatures.size();
        vector<int>result(n,0);
        stack<int>stack;

        for(int i =0;i<n;i++){

            while(!stack.empty() && temperatures[i]>temperatures[stack.top()]){
                int past_day=stack.top();
                result[past_day]=i-past_day;
                stack.pop();
            }
            stack.push(i);
        }
    return result;
    }
};