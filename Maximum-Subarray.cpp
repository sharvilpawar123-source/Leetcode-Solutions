1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int n =nums.size();
5        int maxSum=INT_MIN;
6        int currSum=0;
7        for(int i=0;i<n;i++){
8            currSum=currSum+nums[i];
9            maxSum=max(maxSum,currSum);
10            if(currSum<0){
11                currSum=0;
12            }
13
14            }
15        return maxSum;
16        }
17    
18};