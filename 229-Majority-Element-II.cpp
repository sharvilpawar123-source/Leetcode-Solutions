class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }
            if (count > (n / 3)) {
                if (s.find(nums[i]) == s.end()) {
                    ans.push_back(nums[i]);
                    s.insert(nums[i]);
                }
            } else {
                count = 0;
            }
        }
        return ans;
    }
};
