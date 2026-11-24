class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ans=INT_MIN;
        int maxEle=0;
        int totalLCM=1;
        for(int i=0;i<nums.size();i++){
            maxEle=max(maxEle,nums[i]);
            totalLCM=lcm(totalLCM,nums[i]);
        }
        long long maxProduct=totalLCM*maxEle;
        for(int i=0;i<nums.size();i++){
            long long currP=1;
            long long currG=0;
            long long currL=1;
            for(int j=i;j<nums.size();j++){
                currP*=nums[j];
                currG=gcd(currG,nums[j]);
                currL=lcm(currL,nums[j]);
                if(currP==1LL*currG*currL){
                    ans=max(ans,j-i+1);
                }
                if(currP>maxProduct){
                    break;
                }
            }
        }
        return ans;
    }
};