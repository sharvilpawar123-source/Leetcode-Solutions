1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
10 * right(right) {}
11 * };
12 */
13class Solution {
14public:
15    vector<string> helper(TreeNode* root, string path, vector<string>& ans) {
16        //    base case
17        if (root->left == NULL && root->right == NULL) {
18            ans.push_back(path);
19        }
20        //  to add left ki not NULL val in path
21        if (root->left != NULL) {
22            helper(root->left, path + "->" + to_string(root->left->val), ans);
23        }
24        //  to add right ki not NULL val in path
25
26        if (root->right != NULL) {
27            helper(root->right, path + "->" + to_string(root->right->val), ans);
28        }
29        return ans;
30    }
31
32    vector<string> binaryTreePaths(TreeNode* root) {
33        vector<string> ans;
34        string path = to_string(root->val);
35        return helper(root, path, ans);
36    }
37};