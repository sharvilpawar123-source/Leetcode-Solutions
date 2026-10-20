class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<pair<int,int>>ans;
            int count=1;
        for(int i=1;i<=nums.size();i++){
            if(i<nums.size() && nums[i]==nums[i-1]){
                count++;
            }
            else{
                ans.push_back({count,nums[i-1]});
                count=1;
            }
        }
        sort(ans.begin(),ans.end());
        reverse(ans.begin(),ans.end());
        
        vector<int>finalAns;
        for(int i=0;i<k;i++){
                finalAns.push_back(ans[i].second);
        }
        return finalAns;
    }
};