1class Solution {
2public:
3
4bool isPrime(int n){
5    for(int i=2;i*i<=n;i++){
6        if(n%i==0){
7            return false;
8            break;
9        }
10
11    }
12    return true;
13}
14
15    int countPrimes(int n) {
16     
17        // sieve of Erithosthenes
18
19      int  count=0;
20vector<bool>isPrime(n,true);
21        for(int i=2;i<n;i++){
22            if(isPrime[i]){
23                count+=1;
24                for(int j=i*2;j<n;j+=i){
25                    isPrime[j]=false;
26                }
27            }
28        }
29        return count;
30
31        
32    }
33};