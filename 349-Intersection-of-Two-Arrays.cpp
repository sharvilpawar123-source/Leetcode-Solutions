class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int> s;
        for (int ele : nums1) {
            for (int val : nums2) {
                if (ele == val) {
                    if (s.find(ele) == s.end()) {
                        ans.push_back(ele);
                    }
                    s.insert(ele);
                }
            }
        }
        return ans;
    }
};