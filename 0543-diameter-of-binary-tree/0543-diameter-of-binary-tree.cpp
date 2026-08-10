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
int maxdiameter=0;

     int dfs(TreeNode* root){

        if(root==nullptr){
            return 0;        
     }
     else{
        int leftHeight=dfs(root->left);
        int rightHeight=dfs(root->right);
        maxdiameter=max(maxdiameter,leftHeight+rightHeight);

        return 1 + max(leftHeight,rightHeight);
     }
     }





    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return maxdiameter;
        
    }
     
};