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
class Solution {
public:
    TreeNode* root(vector<int>& nums, int st, int end, TreeNode* ans) {
        // base case
        if (st > end)
            return NULL;
        int mid = st + (end - st) / 2;
        ans = new TreeNode(nums[mid]);
        ans->left = root(nums, st, mid - 1, NULL);
        ans->right = root(nums, mid + 1, end, NULL);
        return ans;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* ans = NULL;
        return root(nums, 0, nums.size() - 1, ans);
    }
};