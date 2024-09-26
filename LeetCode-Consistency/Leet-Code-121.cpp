// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {



        int n = prices.size();
        int maxProfit = INT_MIN;
        for(int i=0; i<n; i++){
            for(int j=i+1;j<n;j++){
                int sellPrice=prices[j] - prices[i];
                maxProfit = max(maxProfit,sellPrice);
            }
        }

        if(maxProfit < 0) return 0;
        
        return maxProfit;
        
    }
};