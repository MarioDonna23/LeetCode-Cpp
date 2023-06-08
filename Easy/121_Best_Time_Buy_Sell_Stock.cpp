/*
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
*/

#include <vector>
#include <limits.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_profit = 0;

        for(int i=0; i<prices.size(); i++) // Loop the prices of the stock
        {
            if(prices[i] < min_price) // Check if current price is the lowest recorded
            {
                min_price = prices[i]; // If it is, set it as the new lowest
            }
            else if(prices[i] - min_price > max_profit) // Check if current profit is the max
            {
                max_profit = prices[i] - min_price; // If it is, save it as the maximum profit
            }
        }

        return max_profit;
    }
};