class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        int idx=0;
        double ans=0;
        vector<int>temp(nums1.size()+nums2.size());
        while(i<nums1.size()&& j<nums2.size()){
            if(nums1[i]>nums2[j]){
                temp[idx]=nums2[j];
                j++;
                idx++;
            }
            else{
                temp[idx]=nums1[i];
                i++;
                idx++;
            }
        }
        while(i<nums1.size()){
            temp[idx]=nums1[i];
            i++;
            idx++;
        }
        while(j<nums2.size()){
            temp[idx]=nums2[j];
            j++;
            idx++;
        }
        if(temp.size()%2==0){
             ans= temp[(temp.size()-1)/2]+temp[(temp.size())/2];
             ans=ans/2;
        }
        else{
            ans=temp[(temp.size())/2];
        }
            return ans;
    }
};