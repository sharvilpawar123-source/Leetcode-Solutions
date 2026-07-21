class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        long long st = 0;
        long long end = nums.size() - 1;
        long long ans;
        while (st <end) {
            long long mid = st + (end - st) / 2;


            if(nums[mid]<nums[mid+1]){
                st=mid+1;
            }
            else{
                end=mid;
            }

        }
        return st;
    }
};