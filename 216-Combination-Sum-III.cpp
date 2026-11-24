class Solution {
public:

    void helper(int k, int n,vector<int>&num,vector<int>&curr,vector<vector<int>>&ans,int i){
        // base case
        if(n==0){
            if(curr.size()==k){
            ans.push_back({curr});
            }
            return;
        }
        if(n<0||i==num.size()||curr.size()>=k)return;

        curr.push_back(num[i]);
        helper(k,n-num[i],num,curr,ans,i+1);
        // backTrack
        curr.pop_back();
        helper(k,n,num,curr,ans,i+1);
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>curr;
        vector<int>num={1,2,3,4,5,6,7,8,9};

        helper(k,n,num,curr,ans,0);
        return ans;
    }
};