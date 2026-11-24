class Solution {
public:
    long long helper(long long expo,long long pow){
        long long ans=1;
        long long mod =1000000007;
        while(pow>0){
            if(pow%2==1){
                ans=(ans*expo)%mod;
            }
            expo=(expo*expo)%mod;
            pow=pow/2;

        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long odd=n /2;        
        long long even=(n+1)/2; 

        long long evenChoice=helper(5,even); 
        long long primeChoice =helper(4,odd);
        return  (evenChoice*primeChoice)%1000000007 ;          
    }
};