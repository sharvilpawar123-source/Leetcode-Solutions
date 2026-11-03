class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            while(nums[i]!=nums[nums.size()-1]){
                count++;
                nums[i]++;
            }

        }
        return count;
    }
};