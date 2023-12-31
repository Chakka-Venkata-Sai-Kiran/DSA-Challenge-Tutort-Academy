/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int x = p -> val, y = q -> val, z;
        while(root){
            z = root -> val;
            if(z < x && z < y)
                root = root -> right;
            else if(z > x && z > y)
                root = root -> left;
            else
                return root;
        }
        return nullptr;
    }
};
