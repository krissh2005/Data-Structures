/*
    https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        if(prices.size() < 1)
            return 0;     
        
        int buyIndex = 0;
        int profit = 0;
        int maxprofit = 0;
        
        for(int i = 1; i < prices.size() ;i++)
        {
            if(prices[i] > prices[buyIndex])
            {
                profit = prices[i] - prices[buyIndex];
                if(profit > maxprofit)
                    maxprofit = profit;
            }
            else
            {
                buyIndex = i;
            }
        }
        return maxprofit;
    }
};
