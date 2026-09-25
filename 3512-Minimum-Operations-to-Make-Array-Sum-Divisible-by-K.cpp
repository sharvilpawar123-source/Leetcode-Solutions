class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        while(sum%k!=0){
            sum=sum-1;
            ans++;
        }
        return ans;
    }
};