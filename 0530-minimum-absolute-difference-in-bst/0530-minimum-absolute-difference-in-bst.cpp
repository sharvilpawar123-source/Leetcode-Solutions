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
        TreeNode* prev=NULL;
    int getMinimumDifference(TreeNode* root) {
        if(root==NULL)return 0;
        int ans=INT_MAX;
        if(root->left){
            int leftVal=getMinimumDifference(root->left);
            ans=min(ans,leftVal);
        }
        if(prev!=NULL){
            ans=min(ans,root->val-prev->val);
        }
        prev=root;
        if(root->right){
            int rightVal=getMinimumDifference(root->right);
            ans=min(ans,rightVal);


        }
        return ans;
    }
};