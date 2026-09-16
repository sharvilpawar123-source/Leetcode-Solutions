/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
#include <iostream>
using namespace std;
class Solution {
public:
    int height(TreeNode* root) {
        // base case
        if (root == NULL) {
            return 0;
        }
        int Leftheight = height(root->left);
        int Rightheight = height(root->right);
        return max(Leftheight, Rightheight) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        // base case
        if (root == NULL) {
            return 0;
        }
        // left diameter
        int leftDiameter = diameterOfBinaryTree(root->left);
        // right diameter
        int rightDiameter = diameterOfBinaryTree(root->right);

        // curr diameter
        int currDiameter = height(root->left) + height(root->right);
        return max(currDiameter, max(leftDiameter, rightDiameter));
    }
};