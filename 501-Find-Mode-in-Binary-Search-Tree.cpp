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
unordered_map<int,int>m;
        void helper(TreeNode* root){
        if(root==NULL)return;
        m[root->val]++;
        helper(root->left);
        helper(root->right);
        }

    vector<int> findMode(TreeNode* root) {
        if(root==NULL)return {};
vector<int>ans;
        helper(root);
        int count=0;
        for(auto i :m){
            count=max(count,i.second);
        }
        for(auto i:m){
            if(i.second==count){
                ans.push_back(i.first);
            }
        }
        return ans;

    }
};
