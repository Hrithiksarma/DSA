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
    int rob(TreeNode* root) {
       vector<int>options =travel(root);
        return max(options[0],options[1]);
    }

    vector<int>travel(TreeNode* root){
        if(root==nullptr){
            return {0,0};
        }

        vector<int>left_choices=travel(root->left);
        vector<int>right_choices=travel(root->right);
        vector<int>options(2,0);

        options[0]=root->val+left_choices[1]+right_choices[1];
        options[1]=max(left_choices[0],left_choices[1])+max(right_choices[0],right_choices[1]);

        return options;
    }

};