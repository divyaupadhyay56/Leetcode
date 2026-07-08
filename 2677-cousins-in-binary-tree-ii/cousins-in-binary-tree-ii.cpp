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
    TreeNode* replaceValueInTree(TreeNode* root) {
        queue<pair<TreeNode*, TreeNode*>> q;
        q.push({root, NULL});
        unordered_map<TreeNode*, int> parentChildSum;
        while(!q.empty())
        {
            int size = q.size();
            // sum of all cousins in the queue
            // cout<<"size: " << size<<"\n\n";
            int sumAll = 0;
            for(int i = 0; i < size; i++)
            {
                pair<TreeNode*, TreeNode*> front = q.front();
                // cout<<front.first->val<<"\n";
                q.pop();
                sumAll += (front.first->val);
                q.push(front);
            }
            
            for(int i = 0; i < size; i++)
            {
                pair<TreeNode*, TreeNode*> front = q.front();
                q.pop();
                TreeNode *child = front.first, *parent = front.second;
                if(child->left) 
                {
                    // cout<<child->left->val<<"\n";
                    parentChildSum[child] += child->left->val;
                    q.push({child->left, child});
                }
                if(child->right)
                {
                    // cout<<child->right->val<<"\n";
                    parentChildSum[child] += child->right->val;
                    q.push({child->right, child});
                }
                // cout<<"\n\n\n";
                if(parent == NULL)
                {
                    child->val = 0;
                }
                else
                {
                    child->val = sumAll - parentChildSum[parent];
                }
            }
        }
        return root;
    }
};