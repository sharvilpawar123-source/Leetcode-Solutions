1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int n=prices.size();
5        int maxProfit=0;
6        int buyPrice=prices[0];
7        for(int i=1;i<n;i++){
8            if(prices[i]>buyPrice){
9                maxProfit=max(maxProfit,(prices[i]-buyPrice));
10            }
11                 buyPrice=min(buyPrice,prices[i]);
12        }
13return maxProfit;
14    }
15};