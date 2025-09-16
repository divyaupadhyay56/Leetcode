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
private:
    int getRightMostNode(TreeNode* root)   // maximum element from the tree;
    {
        if(root->right)
        {
            return getRightMostNode(root->right);
        }
        else
        { 
            return root->val;
        }
        
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return NULL;
        if(key > root->val)
        {
            root->right = deleteNode(root->right, key);
        }
        else if (key < root->val)
        {
            root->left = deleteNode(root->left, key);
        }
        else
        {
            if(root->left == NULL)
            {
                return root->right;
            }
            else if(root->right == NULL)
            {
                return root->left;
            }
            else
            {
                int maximumElement = getRightMostNode(root->left);
                TreeNode* leftNode = deleteNode(root->left, maximumElement);
                root->left = leftNode;
                root->val = maximumElement;
            }
        }
        return root;
    }
};