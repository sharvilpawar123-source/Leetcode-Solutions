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
    int helperDFS(TreeNode*node,int rootVal){
        int ans=-1;
        if(node==NULL)return -1;
    if(node->val>rootVal){
    return node->val;
}
    int left=helperDFS(node->left,rootVal);
    int right=helperDFS(node->right,rootVal);

    if(left==-1)return right;
    if(right==-1)return left;
    return min(left,right);
    }

    int findSecondMinimumValue(TreeNode* root) {
        if(root==NULL)return -1;
        return helperDFS(root,root->val);     
    }
};

