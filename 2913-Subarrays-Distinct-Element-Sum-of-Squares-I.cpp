class Solution {
public:
    int sumCounts(vector<int>& nums) {
        // 1 find subarrays
        // 2 count distincts
        // 3 ans
            int ans=0;
        for(int i=0;i<nums.size();i++){
                vector<int>help;
            for(int j=i;j<nums.size();j++){
                help.push_back(nums[j]);
                unordered_set<int>s;
                for(int k=0;k<help.size();k++){
                    s.insert(help[k]);
                }
                ans+=s.size()*s.size();
                
            }
        }
        return ans;
    }
};