/*
https://leetcode.com/problems/invert-binary-tree/
*/

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

// class Solution {
// public:
//     TreeNode* invertTree(TreeNode* root) {
//         TreeNode* temp = NULL;

//         if(root == NULL) // If empty tree, return empty tree
//         {
//             return NULL;
//         }

//         /* Swap left and right nodes */
//         temp = root->right; 
//         root->right = root->left; 
//         root->left = temp;

//         /* Recursively call this function to right and left nodes */
//         invertTree(root->right);
//         invertTree(root->left);
        
//         return root;
//     }
// };