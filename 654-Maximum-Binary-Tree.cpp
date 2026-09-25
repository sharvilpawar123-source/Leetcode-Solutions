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

    TreeNode* helper(vector<int>& nums, int st, int end) {
    int maxNum=INT_MIN;
    int maxNumIdx;
    if(st>end)return NULL;
        for(int i=st;i<=end;i++){
             if(nums[i]>maxNum){
                maxNumIdx=i;
                maxNum=nums[i];
             }
        }
        TreeNode* root=new TreeNode(maxNum);
      root->left=helper(nums,st,maxNumIdx-1);
      root->right=helper(nums,maxNumIdx+1,end);

      return root;
    }



    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size()==0)return NULL;
      return helper( nums,0,nums.size()-1) ;

    }
};