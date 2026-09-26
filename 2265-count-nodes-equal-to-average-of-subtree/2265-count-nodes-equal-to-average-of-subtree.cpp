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
int ans=0;

    int helper2(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return 1+helper2(root->left)+helper2(root->right);
    }

        int helper(TreeNode* root) {
            if(root==NULL)return 0;
            int leftSum=helper(root->left); 
            int rightSum=helper(root->right); 

           int curr= leftSum+rightSum+root->val;
           int count= helper2(root);
           if(root->val==curr/count){
            ans++;
           }
           return curr;
        }


    int averageOfSubtree(TreeNode* root) {
        helper(root);
        return ans;
    }
};