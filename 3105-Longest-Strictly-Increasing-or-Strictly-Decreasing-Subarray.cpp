class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        // increasing
        int incC=INT_MIN;
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                count++;
            }
            else{
             incC=max(incC,count);
                count=1;
            }
        }
        incC=max(incC,count);
        int decC=INT_MIN;
        count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                count++;
            }
            else{
             decC=max(decC,count);
                count=1;
            }
        }
         decC=max(decC,count);
        return max(incC,decC);
    }
};