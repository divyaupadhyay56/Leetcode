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
    int store(TreeNode* root,int curr){
        if(root == NULL){
            return 0;
        }
        curr = (curr*10) + root->val;
        if(root->left == NULL && root->right == NULL){
            return curr;
        }
        int l = store(root->left,curr);
        int r = store(root->right,curr);
        return l+r;
    }
    int sumNumbers(TreeNode* root) {
        int curr = 0;
        return store(root,curr);
        
    }
};