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

    void InOrderTraverseHelper(TreeNode *root, vector<int>& list){
        
        if(root == nullptr){
            return;
        }
        
        InOrderTraverseHelper(root->left, list);

        list.push_back(root->val);

        InOrderTraverseHelper(root->right, list);
        
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;

        InOrderTraverseHelper(root, result); 

        return result;       
    }
};