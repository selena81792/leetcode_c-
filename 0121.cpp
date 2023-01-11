/*
121. Best Time to Buy and Sell Stock
Easy
22.4K
708
Companies
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.*/


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        for (int i = 0; i < prices.size(); i++){
            buy = min(prices[i], buy);
            profit = max(prices[i]-buy, profit);
        }
        return profit;
    }


    int old_maxProfit(vector<int>& prices) {
        int profit = 0;

        for (int buy = 0; buy < prices.size(); buy++){
            for (int sell = buy + 1; sell < prices.size(); sell++){
                if ((prices[sell] - prices[buy]) > profit) profit = prices[sell]-prices[buy];
            }
        }

        return profit;
    }
};