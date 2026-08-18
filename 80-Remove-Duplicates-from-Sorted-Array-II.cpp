class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> dummy;
        for (int i = 0; i < nums.size(); i++) {
            int count = 1;
            int j=i+1;
        
        while(  j<nums.size() &&  nums[i]==nums[j]  ){
            count++;
            j++;
        }
        dummy.push_back(nums[i]);
            if (count >= 2) {
                dummy.push_back(nums[i]);
            }
            i=j-1;

        }

        for (int i = 0; i < dummy.size(); i++) {
            nums[i] = dummy[i];
        }
        return dummy.size();
    }
};