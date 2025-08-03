// Initial Code

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int current = 0;
        int profit = 0;
        int bought = false;
        if(prices.size() <= 1){
            return 0;
        }

        for(int i = 0; i<prices.size()-1; i++){
            if(prices[i+1] < prices[i] && bought){
                profit += max(0, prices[i] - current);
                bought = false;
            }

            if(prices[i+1] > prices[i] && !bought){
                current = prices[i];
                bought = true; 
            }

            if(i==prices.size()-2 && bought){
                profit += prices[prices.size() - 1] - current;
            }
        }

        return profit;
    }

// Optimised Approach

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;

        for(int i = 1; i<prices.size(); i++){
            if(prices[i]>prices[i-1]){
                profit += prices[i] - prices[i-1];
            }
        }

        return profit;
    }
};
};
