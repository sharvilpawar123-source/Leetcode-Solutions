class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> d;

        // 1 traverse on first window
        for (int i = 0; i < k; i++) {
            while (d.size() > 0 && nums[d.back()] < nums[i]) {
                d.pop_back();
            }
            d.push_back(i);
        }

        // 2 traverse arr from k to end

        for (int i = k; i < nums.size(); i++) {
            // 2.1 we push first ele in ans as it is lergest ele for first windo
            // trac=versal
            ans.push_back(nums[d.front()]);

            // 2.2 have to remove ele form front which is not belong to curr
            // window
            while (d.size() > 0 && d.front() <= i - k)
                d.pop_front();

            // 2.3 pop smaller ele from back as they can not be ans for curr
            // window

            while (d.size() > 0 && nums[d.back()] < nums[i]) {
                d.pop_back();
            }
            d.push_back(i);
        }
        ans.push_back(nums[d.front()]);
        return ans;
    }
};