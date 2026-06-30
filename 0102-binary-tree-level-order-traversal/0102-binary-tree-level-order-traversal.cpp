/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {

public:
 
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==nullptr){
            return result;
        }

        queue<TreeNode*> q;
        q.push(root);
        
        

        while(!q.empty()){
            
            int size = q.size();
            vector<int>level;
            for(int i = 0; i<size; i++){
            TreeNode* element = q.front();
            q.pop();
            level.push_back(element->val);
            if(element->left!=nullptr){
                q.push(element->left);
            }

            if(element->right!=nullptr){
                q.push(element->right);
              
                }
              
                       
        } 
         result.push_back(level);   
              
    }
    return result;
    }
};