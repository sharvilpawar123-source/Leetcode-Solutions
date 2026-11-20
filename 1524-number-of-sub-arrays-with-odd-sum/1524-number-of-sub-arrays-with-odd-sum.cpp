class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int count=0;
        int currSum=0;
        int odd=0;
        int even=1;
        int mod=1000000007;
       for(int i=0;i<arr.size();i++){
            currSum+=arr[i];
            if(currSum%2!=0){
                count=(count+even)%mod;
                odd++;
            }
            else{
                count=(count+odd)%mod;
                even++;
            }
        }
    return count;
    }
};

