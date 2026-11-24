class Solution {
public:
    void combHelper(vector<int>&candidates,int target,vector<vector<int>>& ans,vector<int>& comb,int i,set<vector<int>>&cheack){
        // base case
        if(target==0){
            if(cheack.find(comb)==cheack.end()){
                ans.push_back(comb);
                cheack.insert(comb);
                return;
            }
        }
    if(target<0||i==candidates.size())return;
      comb.push_back(candidates[i]);
        // single-time
        combHelper(candidates,target-candidates[i],ans,comb,i+1,cheack);
        // backTrack
        comb.pop_back();
        int idx=i+1;
        while(idx<candidates.size()&& candidates[idx]==candidates[i]){
            idx++;
        }
        combHelper(candidates, target, ans, comb, idx, cheack);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int>comb;
        set<vector<int>>cheack;
        combHelper(candidates, target, ans, comb, 0, cheack);

        return ans;
    }
};