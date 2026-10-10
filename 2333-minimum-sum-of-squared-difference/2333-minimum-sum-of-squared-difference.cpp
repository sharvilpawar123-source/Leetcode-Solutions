class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        long long totalDiff=0;
        long long k=(long long)k1+k2;
        vector<int>diff(nums1.size());

        for(int i=0;i<nums1.size();i++){
            diff[i]=abs(nums1[i]-nums2[i]);
            totalDiff+=diff[i];
        }
        // base case
        if(totalDiff<=k)return 0;
        
        int l=0;
        int r=100000;
        while(l<r){
            long long mid =l+(r-l)/2;
            long long temp=0;
            for(int i=0;i<diff.size();i++){
                if(diff[i]>mid){
                    temp+=diff[i]-mid;
                }
            }
            if(temp<=k){
                r=mid;
            }
            else{
                l=mid+1;
            }
                    }
int level=l;
        long long ans=0;
        long long used=0;
        for (int i=0;i<diff.size();i++){
            if (diff[i]>level) {
                used+=diff[i]-level;
                ans+=1LL*level*level;
            } else{
                ans+=1LL*diff[i]*diff[i];
            }
        }

        long long remaining=k-used;
        for (int i=0;i<diff.size();i++) {
            if (diff[i]>=level && remaining>0) {
                ans-=2LL*level-1;
                remaining--;
            }
        }
        return ans;
    }
};



