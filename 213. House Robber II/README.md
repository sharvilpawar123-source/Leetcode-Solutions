# 213. House Robber II

### Difficulty: Medium

## Description
You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed. All houses at this place are arranged in a circle. That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have a security system connected, and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

 
Example 1:


Input: nums = [2,3,2]
Output: 3
Explanation: You cannot rob house 1 (money = 2) and then rob house 3 (money = 2), because they are adjacent houses.


Example 2:


Input: nums = [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.


Example 3:


Input: nums = [1,2,3]
Output: 3


 
Constraints:


	1 <= nums.length <= 100
	0 <= nums[i] <= 1000

## Submission Details
- **Status**: Accepted
- **Runtime**: 0 ms
- **Memory**: 11016000
- **Language**: cpp

## Code
```cpp
class Solution {
public:
    int helper(vector<int>& nums, int st, int end) {
        vector<int> dp(nums.size() - 1);

        dp[0] = nums[st];
        dp[1] = max(nums[st], nums[st + 1]);
        for (int i = st + 2, j = 2; i <= end; i++, j++) {
            dp[j] = max(dp[j - 1], dp[j - 2] + nums[i]);
        }
        return dp[nums.size() - 2];
    }

    int rob(vector<int>& nums) {

        if (nums.size() == 1) {
            return nums[0];
        }
        if (nums.size() == 2) {
            return max(nums[0], nums[1]);
        }
        // handle for last
        return max(helper(nums, 0, nums.size() - 2),
                   helper(nums, 1, nums.size() - 1));
    }
};
```
