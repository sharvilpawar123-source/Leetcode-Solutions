class Solution {
public:
    TreeNode* prev = NULL;
    int ans = INT_MAX;

    int minDiffInBST(TreeNode* root) {
        if (root == NULL)
            return ans;

        minDiffInBST(root->left);

        if (prev != NULL) {
            ans = min(ans, root->val - prev->val);
        }

        prev = root;

        minDiffInBST(root->right);

        return ans;
    }
};