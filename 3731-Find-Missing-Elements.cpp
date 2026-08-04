class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> ans;
        int expected = nums[0];

        for (int x : nums) {
            while (expected < x) {
                ans.push_back(expected);
                expected++;
            }

            if (expected == x)
                expected++;
        }

        while (expected <= nums.size()) {
            ans.push_back(expected);
            expected++;
        }

        return ans;
    }
};